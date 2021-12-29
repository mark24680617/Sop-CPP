#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void capitalize(string & word);

int main(){
    string word;
    cout<<"Enter a word: ";
    getline(cin,word);
    capitalize(word);
    return 0;
}

void capitalize(string & word){
    (word[0])=toupper(word[0]);
    for (int i=1;i<word.length();i++){
        word[i]=tolower(word[i]);
    }
    cout<<word<<endl;
}



