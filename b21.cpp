#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    float input[10];
    for(int i = 0 ; i < 10 ; i++){
        cin >> input[i];
    }
    float max = input[0];
    for(int i = 1 ; i < 10 ;i++){
        if(input[i] > max){
            max = input[i];
        }
    }
    float min = input[0];
    for(int i = 1 ; i < 10 ;i++){
        if(input[i] < min){
            min = input[i];
        }
    }
    cout  << "maximum:" << fixed  <<  setprecision(2) << max  <<  endl;
    cout  << "minimum:" << fixed  <<  setprecision(2) << min  <<  endl;
    return 0;
}
