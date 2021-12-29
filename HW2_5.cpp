#include <iostream>
using namespace std;
int isPerfect(int n);

int main(){
    for (int i=1; i<=9999; i++){
        if (isPerfect(i)){cout<<i<<endl;}
    }
    return 0;
}

int isPerfect(int n){
    int perfectnum=0;
    int num=1;
    while (num<n){
        if (n%num==0){
            perfectnum+=num;
        }
        num++;
    }
    if (perfectnum==n){return true;}
    else {return false;}
}