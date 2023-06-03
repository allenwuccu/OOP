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
    int num = 0;
    int work[1000];
    cin >> num;
    for(int i = 0 ; i < num ; i++){
        cin >> work[i];
    }
    bubble(num, work);
    int wait = 0, j = 0;
    for(int i = 0 ; i < num-1 ; i++){
        j += work[i];
        wait += j;
    }
    cout << wait << endl;
    return 0;
}
