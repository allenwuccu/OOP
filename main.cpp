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
            if(list[j] < list[j+1]){
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
    cin >> num;
    int work[num];
    for(int i = 0 ; i < num ; i++){
        cin >> work[i];
    }
    bubble(num, work);
    for(int i = 0 ; i < num ; i++){
        cout << i+1 << " " << work[i] << endl;
    }
     
    //printf("%d\n", wait);
    return 0;
}
