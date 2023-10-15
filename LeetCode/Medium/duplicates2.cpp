#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* deleteDuplicates( ListNode* head ){
    if( head == nullptr ){
        break;
    }

    while( head -> val == head -> next -> val ){
        if( head == nullptr ){
            break;
        }
        head = head -> next;
    }

    ListNode* ptr = head;

    while( true ){
        if( ptr -> next == nullptr ){
            break;
        }
        else{
            if( ptr -> val != ptr -> next -> val ){
                if( ptr -> next -> next != nullptr ){
                    if( ptr -> next -> val == ptr -> next -> next -> val ){
                        ptr -> next = ptr -> next -> next;
                        continue;
                    }
                }else{
                    break;
                }
            }
        }
        ptr = ptr -> next;
    }
    return head;
}

int main(){

}