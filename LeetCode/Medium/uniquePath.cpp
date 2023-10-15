#include <iostream>
#include <vector>

int uniquePathWithObstacle( std:: vector< std:: vector< int > >& obstacleGrid );

int main(){

    int m,n;
    std:: cin >> m >> n;

    std:: vector< std:: vector< int > > grid;

    int value;
    for( int i = 0; i < m; i++ ){
        std:: vector< int > row;
        for( int j = 0; j < n; j++ ){
            std:: cin >> value;
            row.push_back( value );
        }
        grid.push_back( row );
    }

    std:: cout << uniquePathWithObstacle( grid );
}


int uniquePathWithObstacle( std:: vector< std:: vector< int > >& obstacleGrid ){
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();

    if( obstacleGrid[m - 1][n - 1] == 1 ){
        return 0;
    }

    int grid[m][n];
    bool obstacle = false;
    for( int i = 0; i < m; i++ ){
        if( obstacle ){
            grid[i][0] = 0;
            continue;
        }

        if( obstacleGrid[i][0] == 0 ){
            grid[i][0] = 1;
        }
        else{
            grid[i][0] = 0;
            obstacle = true;
        }
    }

    obstacle = false;
    for( int i = 0; i < n; i++ ){
        if( obstacle ){
            grid[0][i] = 0;
            continue;
        }

        if( obstacleGrid[0][i] == 0 ){
            grid[0][i] = 1;
        }
        else{
            grid[0][i] = 0;
            obstacle = true;
        }
    }


    for( int i = 1; i <  m; i++ ){
        for( int j = 1; j < n; j++ ){
            if( obstacleGrid[i][j] == 1 ){
                grid[i][j] = 0;
            }
            else if( obstacleGrid[i - 1][j] == 1 ){
                grid[i][j] = grid[i][ j - 1];
            }
            else if( obstacleGrid[i][j - 1] == 1 ){
                grid[i][j] = grid[i - 1][j];
            }
            else{
                grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
            }
        } 
    }

    // std:: cout << "\n";
    // for( int i = 0; i < m; i ++ ){
    //     for( int j = 0; j < n; j++ ){
    //         std:: cout << grid[i][j] << " ";
    //     }
    //     std:: cout << "\n";
    // }
    return grid[m - 1][n - 1];
}