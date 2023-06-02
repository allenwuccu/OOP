#include <iostream>

using namespace std;

int main() {
    int row=0, col=0;
    
    cin >> row >> col;
    int temp = row;
    row = col;
    col = temp;
    int in[row][col];
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            cin >> in[j][i];
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(j != (col-1))
                cout << in[i][j] << " ";
            if(j == (col-1))
                cout << in[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
