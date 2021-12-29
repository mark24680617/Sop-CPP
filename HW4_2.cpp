#include <iostream>
#include <fstream>
#include <string>
#include<sstream>
using namespace std;
string promptUserForFile(ifstream & infile, string prompt = "");

int main() {
    ifstream infile;
    promptUserForFile(infile, "Input file: ");
    int chars=2,words=0,lines=0;
    while (true){
        int ch = infile.get();
        if (ch == EOF) break;
        if (ch == '\n' || ch == '\0'){lines++;}
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0'){
            words++;
            chars++;}
        else {chars++;}
    }
    if (chars > 0){
        words++;
        lines++;}
    cout<<"Characters: "<<chars<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Lines: "<<lines<<endl;
    infile.close();
    return 0;
}

string promptUserForFile(ifstream & infile, string prompt){
    while(true){
        cout << prompt;
        string filename;
        getline(cin, filename);
        infile.open(filename.c_str());
        if (!infile.fail()) return filename;
        infile.clear();
        cout << "Unable to open that file. Try again." << endl;
        if (prompt == "") prompt = "Input file: ";
    }
}
