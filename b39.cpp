#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <list>
using namespace std;
int main(){
    int num = 0, listen = 0, read = 0, speak = 0;
    cin >> num;
    for(int i = 0 ; i < num ; i++){
        cin >> listen >> read >> speak;
        if(listen >= 60 && read >= 60 && speak >= 60){
            cout << "P" << endl;
            continue;
        }
        if(listen <= 59 && read > 59 && speak > 59){
            if((listen + read + speak) >= 220){
                cout << "P" << endl;
                continue;
            }
            else{
                cout << "M" << endl;
                continue;
            }
        }
        if(listen > 59 && read <= 59 && speak > 59){
            if((listen + read + speak) >= 220){
                cout << "P" << endl;
                continue;
            }
            else{
                cout << "M" << endl;
                continue;
            }
        }
        if(listen > 59 && read > 59 && speak <= 59){
            if((listen + read + speak) >= 220){
                cout << "P" << endl;
                continue;
            }
            else{
                cout << "M" << endl;
                continue;
            }
        }
        if(listen <= 59 && read <= 59){
            if(speak >= 80){
                cout << "M" << endl;
                continue;
            }
            else{
                cout << "F" << endl;
                continue;
            }
        }
        if(read <= 59 && speak <= 59){
            if(listen >= 80){
                cout << "M" << endl;
                continue;
            }
            else{
                cout << "F" << endl;
                continue;
            }
        }
        if(listen <= 59 && speak <= 59){
            if(read >= 80){
                cout << "M" << endl;
                continue;
            }
            else{
                cout << "F" << endl;
                continue;
            }
        }
    }
 }
