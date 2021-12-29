#include <iostream>
using namespace std;
double fact(int N);
double fact2(int N);

int main() {
    int N;
    cout <<"Enter integer N and I will calculate: ";
    cin >>N;
    cout <<endl<<N<<"! ="<<fact(N);
    cout <<endl<<N<<"! ="<<fact2(N);
    return 0;}

double fact(int N){
    double Nfact =1;
    for (int i=2; i<=N; i++){
        Nfact *= i;
    }
    return Nfact;
}

double fact2(int N){
    double Nfact =1;
    for (int i=N; i>=2; i--){
        Nfact *= i;
    }
    return Nfact;
}
