#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd( ListNode* head, int n ){
    int size = 0;
    ListNode* ptr = head;

    while( ptr != nullptr ){
        ptr = ptr -> next;
        size++;
    }

    ListNode* resList;
    ptr = head;
    int count = 0;
    while( ptr != nullptr ){
        if( count == size - n ){
            if( ptr -> next == nullptr ){
                break;
            }

            resList -> val = ptr -> next -> val;
            resList -> next = ptr->next;
            ptr = ptr -> next;
            continue;
            
        }
        resList -> val = ptr -> val;
        resList -> next = new ListNode();
        ptr = ptr -> next;
        count++;
    }

    return resList;
}

int main(){

}