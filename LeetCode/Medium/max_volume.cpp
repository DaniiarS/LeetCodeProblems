#include <iostream>
#include <vector>

int maxVolume( std:: vector<int>& height ){
    int area = 0;
    int size = height.size();

    for( int i = 0; i < size - 1; i++ ){
        for( int j = i + 1; j < size; j++ ){
            if( height[j] >= height[i] ){
                if( height[i] * ( j - i ) > area ){
                    area = height[j] * ( j - i );
                }
            }
            else if( height[j] < height[i] ){
                if( height[j] * ( j - i ) > area ){
                    area = height[j] * ( j - i );
                }
            }
        }
    }

    return area;
}

int main(){
    std:: vector< int > heights;
    int size, value;
    std:: cin >> size;

    for( int i = 0; i < size; i++ ){
        std:: cin >> value;
        heights.push_back(value);
    }

    for( int i = 0; i < size; i++ ){
        std:: cout << heights[i] << " ";
    }
    std:: cout << "\n";

    std:: cout << maxVolume( heights );
}