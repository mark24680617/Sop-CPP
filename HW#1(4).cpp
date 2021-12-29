
#include <iostream>
using namespace std;

int main()
{
    double function=0;
    double pie;
    for(int i= 0; i<= 10000; i++){
        if(i%2==0)
            function +=1*1/(i*2.0+1);
        else
            function +=(-1)*(1/(i*2.0+1));
    }
    pie=4* function;
    cout<<pie<< endl;
    return 0;
}