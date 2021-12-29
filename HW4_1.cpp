#include<iostream>
#include<fstream>
#include<string>
#include <sstream>

using namespace std;
string promptUserForFile(ifstream & infile, string prompt);

int main() {
    ifstream infile;
    string result="";
    int max_value=0;
    promptUserForFile(infile, "Input file: ");
    while (true) {
        string line;
        getline(infile, line);
        if (infile.fail()) break;
        int value=line.length();
        if(value>max_value){
            max_value=value;
            result=line;
        }
    }
    cout<<result<<endl;
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

