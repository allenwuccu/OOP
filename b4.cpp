#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main() {
    int in1=0, in2=0, out1=0, out2=0;
    int fee1=0, fee2=0;
    int fee=0;
    cin >> in1 >> in2;
    cin >> out1 >> out2;
    if(out2 < in2){
        out2 += 60;
        out1--;
    }
    fee1 = out1 - in1;
    fee2 = out2 - in2;
    if(fee1 < 2){
        fee = fee + 30*2*fee1;
        if(fee2 >= 30){
            fee = fee + 30;
        }
    }
    else if(fee1 >= 2 && fee1 <4){
        fee = fee + 120 + 40*2*(fee1-2);
        if(fee2 >= 30){
            fee = fee + 40;
        }
    }
    else if(fee1 >= 4){
        fee = fee + 120 + 160 + 60*2*(fee1-4);
        if(fee2 >= 30){
            fee = fee + 60;
        }
    }
    cout << fee << endl;
    return 0;
}


