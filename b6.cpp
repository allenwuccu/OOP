#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main() {
    int month = 0;
    cin >> month;
    if(month >= 3 && month <= 5)
        cout << "Spring" << endl;
    else if(month >= 6 && month <= 8)
        cout << "Summer" << endl;
    else if(month >= 9 && month <= 11)
        cout << "Autumn" << endl;
    else
        cout << "Winter" << endl;
    return 0;
}