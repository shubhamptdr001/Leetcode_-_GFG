/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        if(!head) return -1;
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast && fast->next){
            if(slow == fast){
                slow = head;
                fast = fast->next;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow->data;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return -1;
    }
};