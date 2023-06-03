#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main() {
    int num=0;
    cin >> num;
    int result=0;
    for(int i = 1 ; i <= num ; i++){
        if((i%3)==0){
            result += i;
        }
    }
    cout << result << endl;
    return 0;
}
