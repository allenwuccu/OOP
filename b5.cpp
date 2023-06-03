#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main() {
    int input = 0;
    cin >> input;
    if(input<0){
        input = input +256;//例如-2變254
    }
    int output[8];
    for(int i = 0 ; i < 8 ; i++)
        output[i]=0;
    for(int i = 7 ; i >= 0 ; i--){
        output[i] = input%2;
        input = input/2;
    }
    for(int i = 0 ; i < 8 ; i++)
        cout << output[i];
    cout << endl;
    return 0;
}
