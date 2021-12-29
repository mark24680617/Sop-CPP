#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    float area= 0;
    float rectangle, w, x, h, r;
    int i;

    cout<<"Enter the radius of the circle: ";
    cin>> r;
    w= r/ 10000;

    for (i = 1; i <= 10000; i++){
        x= w*i;
        h= sqrt((r*r)-(x*x));
        rectangle= h*w;
        area+= rectangle;
    }

    cout<<area<<endl;
    return 0;
}
