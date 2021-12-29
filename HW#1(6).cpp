

#include <iostream>
using namespace std;
const int SENTINEL =0;

int main() {
    cout<<"This program gives the largest value entered."<<endl;
    cout<<"Use"<< SENTINEL<<"to signal and end"<<endl;
    int value=0;
    int largest=0;

    while (true){
        cout <<"Enter an integer: ";
        cin >> value;
        if (value>largest){
            largest=value;
        }
        else if (value==SENTINEL) {
            cout << largest << endl;
            break;
        }
    }

    return 0;
}
