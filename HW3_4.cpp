#include<iostream>
#include <string>
#include <cctype>

using namespace std;
string issentencepalindrome(string str);
bool reverse(string result);

int main(){
    string str;
    string result;
    cout<<"This program tests for sentence palindrome."<<endl;
    cout<<"Enter sentence: ";
    getline(cin,str);
    issentencepalindrome(str);

}
string issentencepalindrome(string str){
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            result += toupper(str[i]);}
    }
    if (reverse(result)){cout<<"It's a palindrome sentence."<<endl;}
    else {cout<<"It's not a palindrome sentence."<<endl;}
}

bool reverse(string result) {
    int n = result.length();
    for (int i = 0; i < n / 2; i++) {
        if (result[i] != result[n - i - 1]) return false;
    }
    return true;
}
