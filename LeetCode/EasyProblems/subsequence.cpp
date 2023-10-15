#include <iostream>
#include <string>

bool isSubsequence( std:: string s, std:: string t ){
    int sizeS = s.size();
    int sizeT = t.size();

    int index = 0;
    for( int i = 0; i < sizeT; i++ ){
        if( index == sizeS ){
            break;
        }
        if( t[i] == s[index] ){
            index++;
        }
    }

    if( index == sizeS ){
        return true;
    }

    return false;
}

int main(){

    std:: string s, t;
    std:: cin >> s >> t;

    std:: cout << isSubsequence( s, t );
}