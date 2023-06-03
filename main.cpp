#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
void bubble(int num, int list[]){
    int temp = 0;
    for(int i = 0 ; i < num - 1 ; i++){
        for(int j = 0 ; j < num - 1 ; j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
int main()
{
    
    int sort[7];
    sort[0] = 1;
    sort[1] = 6;
    sort[2] = 9;
    sort[3] = 23;
    sort[4] = 56;
    sort[5] = 95;
    cin >> sort[6];
    bubble(7, sort);
    for(int i = 0 ; i < 7 ; i++){
        if(i == 6){
            cout << sort[i] << endl;
            return 0;
        }
        cout << sort[i] << ",";
    }
    return 0;
}
