#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverse( ListNode* head, int left, int right ){
    std::vector< int > range;

    ListNode* ptr = head;
    int index = 0;
    bool flag = false;

    while( true ){
        if( ptr == nullptr ){
            break;
        }
        if( index == left - 1 ){
            flag = true;
        }
        else if( index == right - 1 ){
            flag = false;
        }
        if( flag ){
            range.push_back( ptr -> val );
        }
        ptr = ptr -> next;
        index++;
    }

    index = 0;
    ptr = head;
    flag = false;
    while( true ){
        if( ptr == nullptr ){
            break;
        }
        
        if( index == left - 1 ){
            flag = true;
        }
        else if( index == right - 1 ){
            flag = false;
        }
        if( flag  ){
            ptr -> val = range.back();
            range.pop_back();
        }
        ptr = ptr -> next;
        index++;
    }

    return head;
}
int main(){

}