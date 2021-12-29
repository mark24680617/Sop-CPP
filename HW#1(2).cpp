//
// Created by mark2 on 9/19/2021.
//
#include <iostream>
using namespace std;


const int SENTINEL = 0;

int main() {
    cout << "This program calculate the average of a list of numbers." << endl;
    cout << "Use " << SENTINEL << " to signal the end." << endl;
    int total = 0;
    int n=0;
    int average=0;
    while (true) {
        int value;
        cout << "Enter number: ";
        cin >> value;
        n +=1;
        if (value == SENTINEL) break;
        total += value;
        average= total/n;
    }
    cout << "The average is " << average << endl;
    return 0;
}