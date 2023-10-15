#include <iostream>
#include <vector>

int maxProduct( std:: vector< int >& nums );




int main(){
    int n;
    std:: cin >> n;

    std:: vector< int > nums;
    int value;
    for( int i = 0; i < n; i++ ){
        std:: cin >> value;
        nums.push_back( value );
    }

    std:: cout << maxProduct( nums );
}





int maxProduct( std:: vector< int >& nums ){
    int size = nums.size();
    if( size == 1 ){
        return nums[0];
    }

    std:: vector< int > pref;
    pref.push_back( nums[0] );

    for( int i = 1; i < size; i++ ){
        if( nums[i] == 0 ){
            pref.push_back( 0 );
            continue;
        }
        else if( nums[i - 1] == 0 ){
            pref.push_back( nums[i] );
            continue;
        }
        pref.push_back( pref[i-1]*nums[i] );
    }














    for( auto i: pref ){
        std:: cout << i << " ";
    }
    std:: cout << "\n";

    for( auto i: nums ){
        std:: cout << i << " ";
    }
    std:: cout << "\n";


    return maxValue;
}