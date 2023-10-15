#include <iostream>
#include <stack>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool isPalindrome( ListNode* head ){
    int size = 0;
    ListNode* ptr = head;
    std:: stack<int> res;

    while( true ){
        if( ptr == nullptr ){
            break;
        }

        ptr = ptr -> next;
        size++;
    }

    ptr = head;
    for( int i = 0; i < size / 2; i++ ){
        res.push(  ptr -> value );
    }
    
    ptr = head;
    for( int i = 0; i < size; i++ ){
        if( i == size / 2 ){
            if( ptr -> val != res.top() ){
                return false;
            }
            res.pop();
            ptr = ptr -> next;
            continue;
        }

        res.push( ptr -> val );
        ptr = ptr -> next;
    }

    return res.empty();
}


int main(){
    std:: cout << 5 / 2;
}