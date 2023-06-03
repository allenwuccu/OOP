#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
void bubble(int num, float list[]){
    float temp = 0;
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
    int N = 0;
    cin >> N;
    float num[N];
    for(int i = 0 ; i < N ; i++){
        cin >> num[i];
    }
    bubble(N, num);
    cout << fixed  <<  setprecision(2) << num[N-1] <<  endl;
    cout << fixed  <<  setprecision(2) << num[0] <<  endl;
    return 0;
}
