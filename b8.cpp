#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main() {
    int num=0;
    cin >> num;
    if(num==1){
        cout << "NO" << endl;
        return 0;
    }
    else{
        for(int i = 2 ; i < num ; i++){
            if((num%i)==0){
                cout << "NO" << endl;//表示有除了1和自己之外的因數
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}



