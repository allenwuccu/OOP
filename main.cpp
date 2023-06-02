#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int x = 0, y = 0;
    cin >> x >> y;
    int result = 0;
    result = pow(x,2) + pow(y,2);
    //printf("%d", result);
    if(result <= 10000){
        cout << "inside" << endl;
    }
    else
        cout << "outside" << endl;
    return 0;
}
