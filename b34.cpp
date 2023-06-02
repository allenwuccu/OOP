#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;
int main(void){
    int height = 0, gender = 0;
    float weight = 0;
    while(cin >> height >> gender && height != EOF){
        if(gender == 1){
            weight = (height - 80) * 0.7;
            cout  << fixed  <<  setprecision(1) << weight <<  endl;
        }
        if(gender == 2){
            weight = (height - 70) * 0.6;
            cout  << fixed  <<  setprecision(1) << weight <<  endl;
        }
    }
    return 0;
}
