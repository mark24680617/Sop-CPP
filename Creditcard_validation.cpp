//This program use Luhn Algorithm test for credit card validation
//It will ask user to input a string and output if the credit card is valid or not.
#include<iostream>
#include <cctype>
#include<string>
#include<algorithm>

using namespace std;
bool isNumberString(string &number);
int doubleEvenSum(string number);
int digitsum(int number);
int oddsum(string number);

const string sentinel="exit";
int main(){
    string number;
    int totalsum;
    cout<<"This program test for valid credit card number."<<endl;
    cout<<"Use exit to signal an end."<<endl;
    while(true){
        cout<<"Enter a valid credit card number: ";
        getline(cin,number);
        if (number== sentinel){break;}
        number.erase(remove_if(number.begin(),number.end(),::isspace),number.end());
        if(!isNumberString(number)){
            cout<<"It's a invalid format. Try again."<<endl;
            continue;}
        totalsum=doubleEvenSum(number)+oddsum(number);
        if (totalsum%10==0){cout<<"It's a valid credit card number."<<endl;}
        else{cout<<"It's not a valid credit card number."<<endl;}
    }
}

bool isNumberString(string & number){
    if (number.length()==0){return false;}
    for (int i=0;i<number.length();i++){
        if (!isspace(number[i])){
        if (!isdigit(number[i])){return false;}
    }}
    return true;
}

int doubleEvenSum(string number){
    int result;
    int x=1;
    int sum=0;

    for (int i=number.length()-1;i>=0;i--){
        if (x%2==0) {
            result= number[i]- 48;
            result*= 2;
            if (result >= 10)
                result = digitsum(result);
            sum+= result;
        }
        ++x;
    }
    return sum;
}

int digitsum(int number){
    int r,sum=0;
    while(number != 0) {
        r = number % 10;
        sum += r;
        number += -r;
        number /= 10;}
    return sum;
}
int oddsum(string number){
    int result;
    int y=1;
    int sum=0;
    for (int i=number.length()-1;i>=0;i--){
        if (y%2==1){
            result=number[i]-48;
            sum+=result;
        }
        ++y;
    }
    return sum;
}