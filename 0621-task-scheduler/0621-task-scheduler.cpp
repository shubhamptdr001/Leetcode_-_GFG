class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);

        for(auto task:tasks){
            mp[task-'A']++;
        }
        int time = 0;
        priority_queue<int>pq;

        for(int i=0;i< 26;i++){
            if(mp[i]>0){
                pq.push(mp[i]);
            }
        }

        while(!pq.empty()){
            vector<int>temp;
            int executed = 0;
            for(int i=0;i< n+1;i++){
                if(pq.empty())break;
                
                int freq = pq.top();
                pq.pop();
                freq--;
                executed++;
                if(freq>0)temp.push_back(freq);
                
            }
            for(int &f : temp){
                pq.push(f);
            }
            if(pq.empty()){
                time += executed;
            }else time += n+1;
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna