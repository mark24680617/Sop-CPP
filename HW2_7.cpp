#include <iostream>
using namespace std;
double x;
double sqrt(double x);

int main(){
    cout<<"Give a value and I will approximate the square root: ";
    cin >> x;
    cout<<sqrt(x)<<endl;
    return 0;
}

double sqrt(double x){
    double g;
    g=x/2.0;
    for (int i=1; i<99999; i++){
        g=(g+x/g)/2;
    }
    return g;
}