#include <iostream>
#include <vector>
using namespace std;

    void merge( vector<int>& nums, int left, int mid, int right ){

        int p1 = left;
        int p2 = mid + 1;
        int temp;
        while( true ){
            if( p1 == mid || p2 == right ){
                break;
            }
            if( nums[p1] > nums[p2] ){
                temp = nums[p1];
                nums[p1] = nums[p2];
                nums[p2] = temp;
            }
            p1++;
            p2++;
        }
    }
    
    void sort( vector<int>& nums, int left, int right ){
        if( left >= right ){
            return;
        }
        int mid = left + (right - left)/2;
        
        sort( nums, left, mid );
        sort( nums, mid + 1, right );
        merge( nums, left, mid, right );
    }
    
    int main() {
        vector< int > nums;
        for( int i = 0; i < 5; i++ ){
            int n;
            cin >> n;
            nums.push_back( n );
        }
        sort(nums, 0, nums.size() - 1);

        for( int i = 0; i < nums.size(); i++ ){
            cout << nums[i] << " ";
        }
    }