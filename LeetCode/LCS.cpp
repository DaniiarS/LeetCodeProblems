#include <iostream>
#include <vector>
#include <string>

int max(int a, int b){
    if(a > b){
        return a;
    }
    
    return b;
}

// aeiaaioooaauuaeiu 
// aeiou
int main(){

    std:: string vowels = "aeiou";
    std:: string s;
    std:: cin >> s;

    if( s.size() < vowels.size() ){
        return 0;
    }

    int table[vowels.size() + 1][s.size() + 1];

    for( int i = 0; i < s.size() + 1; i ++ ){
        table[0][i] = 0;
    }
    for( int i = 0; i < vowels.size() + 1; i++ ){
        table[i][0] = 0;
    }

    for( int i = 1; i < s.size() + 1; i++ ){
        if( s[i - 1] == vowels[0] ){
            table[1][i] = table[1][i - 1] + 1;
        }
        else{
            table[1][i] = table[1][i - 1];
        }
    }

    for( int i = 2; i < vowels.size() + 1; i++ ){
        for( int j = 1; j < s.size() + 1; j++ ){
            if( s[j - 1] == vowels[i - 1] ){
                if( table[i - 1][j] == 0 ){
                    table[i][j] = 0;
                }
                else{
                    table[i][j] = max(table[i - 1][j], table[i][j - 1]) + 1;
                }
            }
            else{
                table[i][j] = table[i][j - 1];
            }
        }
    } 

    // for( int i = 0 ; i < vowels.size() + 1; i++ ){
    //     for( int j = 0 ; j < s.size() + 1; j++ ){
    //         std:: cout << table[i][j] <<  " ";
    //     }
    //     std:: cout << "\n";
    // }

    std:: cout << table[vowels.size()][s.size()] << "\n";
}