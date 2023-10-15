#include <iostream>
#include <vector>

int maxSubArray( std:: vector< int >& nums ){
        int size = nums.size();
        for( int i = 1; i < size; i++ ){
            if( nums[i] < nums[i] + nums[i - 1] ){
                nums[i] = nums[i] + nums[i - 1];
            }
        }

        int max_value = nums[0];
        for( int i = 0; i < size; i++ ){
            if( nums[i] > max_value ){
                max_value = nums[i];
            }
        }
        return max_value;
}

int main(){
    std:: vector< int > nums;
    int n;
    std:: cin >> n;

    int value;
    for( int i = 0; i < n; i ++ ){
        std:: cin >> value;
        nums.push_back( value );
    }

    std:: cout << maxSubArray( nums );
}