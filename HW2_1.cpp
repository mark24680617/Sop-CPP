#include <iostream>
using namespace std;
double CtoF(double degree);
double FtoC(double degree);

int main() {
    char symbol;
    double degree;
    while (true) {
        cout << "Enter F or C: ";
        cin >> symbol;
        cout << "Enter a degree: ";
        cin >> degree;
        if (symbol == 'C') {
            cout << CtoF(degree) << " Fahrenheit." << endl;
            break;
        }
        else if (symbol == 'F') {
            cout << FtoC(degree) << " Celsius." << endl;
            break;
        }
        else {cout << "Try Again. " << endl; }
    }
    return 0;
}

double CtoF(double degree){
    double result;
    result= (degree*(9.00/5.00))+32; //should add digits after dot, since I am using double variable.
    return result;
}
double FtoC(double degree){
    double result;
    result= (degree-32)/(9.00/5.00);
    return result;
}

