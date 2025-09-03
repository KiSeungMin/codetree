#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int max(int a, int b){
    return a > b ? a : b;
}

int min(int a, int b){
    return a > b ? b : a;
}

int getBox(int start_row, int start_col) {
    if (start_row + 1 >= n || start_col + 1 >= n) {
        return 0;
    }

    int result = 0;
    int min_value = grid[start_row][start_col];
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            min_value = min(min_value, grid[start_row + i][start_col + j]);
            result += grid[start_row + i][start_col + j];
        }
    }
   
   return result - min_value;
}

int getRowStick(int start_row, int start_col) {
    if(start_col + 2 >= n) {
        return 0;
    }

    return grid[start_row][start_col] + grid[start_row][start_col + 1] + grid[start_row][start_col + 2];
}

int getColStick(int start_row, int start_col) {
    if(start_row + 2 >= n) {
        return 0;
    }

    return grid[start_row][start_col] + grid[start_row + 1][start_col] + grid[start_row + 2][start_col];  
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int answer = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            answer = max(getBox(i, j), answer);
            answer = max(getRowStick(i, j), answer);
            answer = max(getColStick(i, j), answer);
        }
    }

    cout<<answer<<endl;
    return 0;
}
