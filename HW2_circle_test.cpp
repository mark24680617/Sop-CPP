
#include "error.h"
#include "HW2_circle.h"
#include<iostream>
double f(double x, double r);
double getArea(double r);
using namespace std;

int main()
{
    double r;
    cout<<"Enter the radius of the circle: ";
    cin>> r;
    if (r<0) error("Incorrect value."); //I don't understand the question requirements "number of rectangles",
    //because I think we already indicate the rectangle amount is 10000. So I just put the error message for negative input.
    cout<<getArea(r)<<endl;
    return 0;
}

double f(double x, double r) {
    return sqrt(r*r - x*x);
}

double getArea(double r){
    double dx = r/10000;
    double area = 0;
    for (int i = 1; i <= 9999; i++) {
        area += f((r*i)/10000, r)*dx;
    }
    return area;
}