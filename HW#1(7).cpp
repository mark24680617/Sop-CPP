#include <iostream>
using namespace std;
const int SENTINEL =0;

int main() {
    cout<<"This program gives the largest and second largest values entered."<<endl;
    cout<<"Use"<< SENTINEL<<"to signal and end"<<endl;
    int value=0;
    int largest=0;
    int second_largest=0;
    int n;

    while (true){
        cout <<"Enter an integer: ";
        cin >> value;
            if (value >= largest) {
                second_largest = largest;
                largest=value;
            }
            else if (value> second_largest) {
                second_largest = value;
            }
            else if (value == SENTINEL) {
                cout << "Largest value is " << largest << " And second largest value is " << second_largest;
                break;
            }

    }

    return 0;
}

