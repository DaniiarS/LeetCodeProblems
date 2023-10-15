#include <iostream>
#include <vector>

std:: vector< int > countBits( int n ){
    std:: vector< int > bits;
    bits.push_back(0);
    if( n == 0 ){
        return bits;
    }
    bits.push_back(1);
    if( n == 1 ){
        return bits;
    }
    
    int index = 0;
    int pow = 2;

    for( int i = 2; i < n + 1; i++ ){
        if( i == pow ){
            pow *= 2;
            index = 0;
        }

        bits.push_back( bits[index] + 1 );
        index++; 
    }

    return bits;
}

int main(){
    int n;
    std:: cin >> n;

    std:: vector< int > bits = countBits( n );
    int size = bits.size();

    for( int i = 0; i < size; i++ ){
        std:: cout << bits[i] << " ";
    }
    std:: cout << "\n";
}