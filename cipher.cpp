#include<iostream>
#include<cctype>
#include<string>
//This program use Ceaser cipher to translate a message to cipher message.
using namespace std;
string translation(string letters,string message);
char cipher(char ch,string letters);

//since there are no requirements from the question,
//I assume all the inputs and outputs are uppercase letters (As the example shown in the question)
int main(){
    string letters;
    string message;
    cout<<"Letter substitution cipher (Uppercase)"<<endl;
    cout<<"Enter a CAPITALIZED 26-letter key: ";
    getline(cin, letters);
    cout<<"Enter a CAPITALIZED message: ";
    getline(cin,message);
    cout<<translation(letters,message)<<endl;
}

char cipher(char ch,string letters){
    switch(ch){
        case'A':return letters[0];
        case'B':return letters[1];
        case'C':return letters[2];
        case'D':return letters[3];
        case'E':return letters[4];
        case'F':return letters[5];
        case'G':return letters[6];
        case'H':return letters[7];
        case'I':return letters[8];
        case'J':return letters[9];
        case'K':return letters[10];
        case'L':return letters[11];
        case'M':return letters[12];
        case'N':return letters[13];
        case'O':return letters[14];
        case'P':return letters[15];
        case'Q':return letters[16];
        case'R':return letters[17];
        case'S':return letters[18];
        case'T':return letters[19];
        case'U':return letters[20];
        case'V':return letters[21];
        case'W':return letters[22];
        case'X':return letters[23];
        case'Y':return letters[24];
        case'Z':return letters[25];
        case' ':return ' ';
    }
}

string translation(string letters,string message){
    string result;
    for(int i=0;i<message.length();i++){
        if (!isalpha(message[i])){
            result+=message[i];}
        else{result+=cipher(message[i],letters);}

    }
    return result;
}