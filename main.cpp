#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
#define num 4
void bubble(int list[num]){
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
int main(){
    int in[num];
    int same = 0;
    int temp = 0;
    for(int i = 0 ; i < num ; i++){
        cin >> in[i];
    }
    bubble(in);
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(in[i] == in[j]){
                same++;
                if(i != j){
                    temp = in[i];
                }
            }
        }
    }
    if(same == 16){//4個點數相同
        cout << "WIN" << endl;
    }
    else if(same == 6){//有兩個相同，剩下兩個不相同
        int sum = 0;
        for(int i = 0 ; i < num ; i++){
            if(in[i] != temp){
                sum += in[i];
            }
        }
        cout << sum << endl;
    }
    else if(same == 8){//兩兩相同
        cout << in[3]*2 << endl;//直接是最大的點數乘以2（因為已經sort過了）
    }
    else{
        printf("R\n");
    }
    return 0;
 }
