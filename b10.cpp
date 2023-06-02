#include <iostream>

using namespace std;

int main() {
    int a=0, b=0;
    cin >> a >> b;
    if(a == b){
        cout << a << endl;
    }
    while(a > 0 && b > 0){
        if(a > b){
            a %= b;
        }
        else if(b > a){
            b %= a;
        }
    }
    if(a == 0){
        cout << b << endl;
    }
    if(b == 0){
        cout << a << endl;
    }
    return 0;
}

