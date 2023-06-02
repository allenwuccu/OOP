#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    float input = 0;
    cin >> input;
    input *= 1.6;
    cout  << fixed  <<  setprecision(1) << input  <<  endl;
    //cout << tmp << endl;
    return 0;
}
