#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

bool checkRow(int row);
bool checkCol(int col);

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int answer = 0;
    for(int i = 0; i < n; i++){
        answer += (checkRow(i) ? 1 : 0);
        answer += (checkCol(i) ? 1 : 0);
    }

    cout<<answer<<"\n";
    return 0;
}

bool checkRow(int row) {
    int value_now = grid[row][0];
    int count = 1;
    
    for(int i = 1; i < n; i++){
        if(grid[row][i] == value_now) {
            count ++;
        } else {
            value_now = grid[row][i];
            count = 1;
        }

        if(count >= m) {
            return true;
        }
    }

    return false;
}

bool checkCol(int col) {
    int value_now = grid[0][col];
    int count = 1;

    for(int i = 1; i < n; i++){
        if(grid[i][col] == value_now) {
            count ++;
        } else {
            value_now = grid[i][col];
            count = 1;
        }

        if(count >= m) {
            return true;
        }
    }

    return false;
}
