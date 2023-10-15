#include <iostream>
#include <vector>

int minPathSum( std:: vector< std:: vector< int > >& grid );
void print( std:: vector< std:: vector< int > >& grid );
int min( int a, int b );

int main(){
    std:: vector< std:: vector< int > > grid;
    int n,m;
    std:: cin >> n >> m; 

    int value;
    for( int i = 0; i < m; i++ ){
        std:: vector<int> row;
        for( int j = 0; j < n; j++ ){
            std:: cin >> value;
            row.push_back( value );
        }
        grid.push_back( row );
    }

    std:: cout << minPathSum( grid );
}

int min( int a, int b ){
    if( a < b ){
        return a;
    }
    return b;
}

int minPathSum( std:: vector< std::vector<int> >& grid ){
    int m = grid.size();
    int n = grid[0].size();

    for( int i = 1; i < n; i++ ){
        grid[0][i] += grid[0][i - 1]; 
    }

    for( int i = 1; i < m; i++ ){
        grid[i][0] += grid[i - 1][0];
    }

    for( int i = 1; i < m; i++ ){
        for( int j = 1; j < n; j++ ){
            grid[i][j] += min( grid[i - 1][j], grid[i][j - 1] );
        }
    }
    return grid[m - 1][n - 1];
}

void print( std:: vector< std:: vector<int> >& grid ){
    for( auto i: grid ){
        for( auto j: i ){
            std:: cout << j << " ";
        }
        std:: cout << "\n";
    }
    
}