class LFUCache {
public:
    int cap ;
    int size;

    unordered_map<int,list<vector<int>>::iterator>mp;
    map<int,list<vector<int>>>freq;

    LFUCache(int capacity) {
        cap = capacity;
        size = 0;
    }
    void makeMostFrequentlyUsed(int key){
        auto &vec = (*(mp[key]));

        int value = vec[1];
        int f = vec[2];

        freq[f].erase(mp[key]);                 // remove from the node list
        if(freq[f].empty()){
            freq.erase(f);                      // if empty remove from freq
        }
        f++;                                    // update the counter

        freq[f].push_front({key, value, f});    // put the new values into the front of the frequency counter
        mp[key] = freq[f].begin();              //update the address
    }
    int get(int key) {
        if(mp.find(key) == mp.end()){
            return -1;
        }
        auto vec = (*(mp[key])); //{key, value ,counter}
        int value = vec[1];
        makeMostFrequentlyUsed(key);
        return value;
    }
    
    void put(int key, int value) {
        if(cap == 0) return;
        if(mp.find(key) != mp.end()){              // if key present
            auto &vec = (*(mp[key]));
            vec[1] = value;
            makeMostFrequentlyUsed(key);
        }
        else if(size < cap){
            size++;
            // fresh banda hai 
            freq[1].push_front(vector<int>({key, value , 1}));
            mp[key] = freq[1].begin();

        }else{
            auto &kaun_sa_list = freq.begin()->second; // 

            int key_to_del = (kaun_sa_list.back())[0];   // key of the node
            kaun_sa_list.pop_back();
            if(kaun_sa_list.empty()){
                freq.erase(freq.begin()->first);
            }
            freq[1].push_front(vector<int>({key, value , 1}));
            mp.erase(key_to_del);
             mp[key] = freq[1].begin();
         }
    
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna