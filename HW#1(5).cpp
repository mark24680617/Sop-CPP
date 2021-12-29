//
// Created by mark2 on 9/20/2021.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    int reverse=0;
    int remainder;
    cout <<"Enter an integer: ";
    cin >> n;
    while (n!=0){
        remainder= n%10;
        reverse= reverse*10+remainder;
        n/=10;
    }
    cout <<reverse<<endl;
    return 0;
}
