#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
void bubble(int num, float list[]){
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
    if(num == 0)
        return 0;
    float x[num], y[num], l[num];
    for(int i = 0 ; i  < num ; i++){
        cin >> x[i] >> y[i];
        l[i] = pow(x[i], 2) + pow(y[i], 2);
    }
    bubble(num, l);
    if((num%2) == 0){
        if(l[(num/2)-1] < l[num/2]){
            cout << fixed  <<  setprecision(2) << sqrt(l[(num/2)-1]) <<  endl;
            cout << fixed  <<  setprecision(2) << sqrt(l[num/2]) <<  endl;
        }
        else{
            cout << fixed  <<  setprecision(2) << sqrt(l[num/2]) <<  endl;
            cout << fixed  <<  setprecision(2) << sqrt(l[(num/2)-1]) <<  endl;
        }
    }
    else if((num%2) != 0)
        cout << fixed  <<  setprecision(2) << sqrt(l[num/2]) <<  endl;
}
