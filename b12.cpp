#include <iostream>
#include <cmath>
using namespace std;

int f(int num){
    double flor = 0;
    if(num == 0 || num == 1){
        return (num + 1);
    }
    else{
        flor = floor(num/2);
        return f(num - 1) + f((int)flor);
    }
}

int main(void){
    int num = 0;
    int output = 0;
    cin >> num;
    output = f(num);
    cout << output << endl;
    return 0;
}
