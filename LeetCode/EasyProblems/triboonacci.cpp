#include <iostream>
#include <vector>


int tribonacci( int n ){
    std:: vector< int > t;
    t.push_back( 0 );
    t.push_back( 1 );
    t.push_back( 1 );
    if( n <= 1 ){
        return n;
    }

    for( int i = 3; i < n; i++ ){
        t[i] = t[i - 1] + t[i - 2] + t[i - 3];
    }

    return t[n - 1];
}


int main(){
    int n;
    std:: cin >> n;
    std:: cout << tribonacci(n);
}