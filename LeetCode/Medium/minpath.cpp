#include <iostream>
#include <vector>

int min( int a, int b ){
    if( a <= b ){
        return a;
    }

    return b;
}

int minPathCost( std::vector< std:: vector<int> > &triangle ){

    int size = triangle.size();
    if( size == 1 ){
        return triangle[0][0];
    }
    triangle[1][0] += triangle[0][0];
    triangle[1][1] += triangle[0][0];

    for( int i = 2; i < size; i++ ){
        for( int j = 0; j <= i; j++ ){
            if( j == 0 ){
                triangle[i][j] += triangle[i - 1][j];
                continue;
            }
            else if( j == i ){
                triangle[i][j] += triangle[i - 1][j - 1];
                continue;
            }

            triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
        }
    }

    int minPathCost = 1000000;
    for( int i = 0; i < size; i++ ){
        if( triangle[size - 1][i] < minPathCost ){
            minPathCost = triangle[size - 1][i];
        }
    }

    return minPathCost;
}

int main(){
    std:: vector< std:: vector< int > > triangle = {{1}, {2, 3}, {5, 6, 7}, {4, 1 , 8, 3}, {6, 1, 3, 4, 10}};
    minPathCost( triangle );

    int size = triangle.size();

    for( int i = 0; i < size; i++ ){
        for( int j = 0; j < i + 1; j++ ){
            std:: cout << triangle[i][j] << " ";
        }
        std:: cout << "\n";
    }
}