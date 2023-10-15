#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* rotateRight( ListNode* head, int k ){
    ListNode* ptr = head;
    ListNode* res;

    int size = 0;
    while( true ){
        if( ptr == nullptr ){
            break;
        }
        
        ptr = ptr -> next;
        size++;
    }

    ptr = head;
    while( true ){
        if( prt -> next == nullptr ){
            ptr -> next = head;
            break;
        }

        ptr = ptr -> next;
    }


    ptr = head;
    for( int i = 0; i < size - k; i++ ){
        ptr = ptr -> next;
    }
    res = ptr -> next;
    ptr -> next = nullptr;

    return res; 
}

int main(){

}