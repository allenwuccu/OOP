#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    int year = 0;
    cin >> year;
    bool bissextile = 0;
    if((year % 4) == 0)
        bissextile = 1;
    if(bissextile == 1){
        if((year % 100) == 0)
            bissextile = 0;
        if((year % 400) == 0)
            bissextile = 1;
    }
    if(bissextile == 1){
        cout << "Bissextile Year" << endl;
    }
    if(bissextile == 0){
        cout << "Common Year" << endl;
    }
    return 0;
}

