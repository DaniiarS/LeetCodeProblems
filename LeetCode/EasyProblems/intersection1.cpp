#include <iostream>
#include <vector>

std:: vector<int> intersection( std:: vector<int>& nums1, std:: vector<int>& nums2 ){
    int size1 = nums1.size();
    int size2 = nums2.size();
    std:: vector<<int> res;
    bool flag1[size1];
    bool flag2[size2];

    for( int i = 0; i < size1; i++ ){
        flag1[i] = false;
    }

    for( int i = 0 ; i < size2; i++ ){
        flag2[i] = false;
    }

    if( size1 < size2 ){
        for( int i = 0; i < size1; i++ ){
            if( nums1[i] == nums2[j] ){
                res.push_back( nums1[i] );
                break;
            }
        }
    }



    int res_size = res.size();
    for( int i = 0; i < res_size; i++ ){
        std:: cout << res[i] << " ";
    }
    std:: cout << "\n";
    return res;
}

int main(){
    std:: vector< int > v1;
    std:: vector< int > v2; 

}