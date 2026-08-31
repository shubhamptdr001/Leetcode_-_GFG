/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        int mindis = INT_MAX;

        ListNode* prev = NULL;
        ListNode* temp = head;
        int last = -1;
        int first = -1;
        int i=1;
        while(temp->next){
            if(prev != NULL){
                if((prev->val < temp->val && temp->next->val < temp->val) || (prev->val > temp->val && temp->next->val > temp->val)){
                    
                    if(first == -1){
                        first = i;

                    }else{
                        mindis = min(mindis,i-last);
                    }
                    last = i;
                }
            }
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(first == last)return {-1,-1};
        return {mindis,last - first};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna