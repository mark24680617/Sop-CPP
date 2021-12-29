#include<iostream>
#include <string>

using namespace std;
void scramble(string word);

int main(){
    basic_string<char> word;
    cout<<"Enter a word: ";
    cin>>word;
    scramble(word);

}

void scramble(string word) {
    int score = 0;
    for (int i = 0; i <= word.length(); i++) {
        switch (word[i]) {
            case'A':case'E':case'I':case'L':case'N':case'O':case'R':case'S':case'T':case'U':
                score+=1;break;
            case'D':case'G':
                score+=2;break;
            case'B':case'C':case'M':case'P':
                score+=3;break;
            case'F':case'H':case'V':case'W':case'Y':
                score+=4;break;
            case'K':
                score+=5;break;
            case'J':case'X':
                score+=8;break;
            case'Q':case'Z':
                score+=10;break;
    }
}
    cout<<score<<endl;

}

