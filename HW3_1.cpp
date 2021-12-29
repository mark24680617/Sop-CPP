#include<iostream>
#include "random.h"
using namespace std;

int main()
{
    double x, y, p;
    int square= 10000;
    int circle= 0;
    for(int i= 0; i< square; i++){
        x= randomReal(-1,1);
        y= randomReal(-1,1);
        if(x*x+y*y< 1){
            circle++;}
    }
    p= 4.00*circle/square;
    cout<<p<<endl;
}
