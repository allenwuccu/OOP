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
    int N = 0, M = 0;
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> M;
        int num[M];
        for(int j = 0 ; j < M ; j++){
            cin >> num[j];
        }
        bubble(M, num);
        int sum = 0;
        for(int k = 0 ; k < M/2 ; k++){
            sum += (num[M-1-k] - num[k]);
        }
        cout << sum << endl;
    }
    return 0;
}
