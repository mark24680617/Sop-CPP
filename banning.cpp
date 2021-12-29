#include <iostream>
#include <fstream>
#include <string>
//This program ban specific letter from a file and export to a new file.
using namespace std;
string promptUserForFile(ifstream & infile, string prompt = "");
string promptUserForOutfile(ofstream&outfile, string question= "");

int main() {
    ifstream infile;
    ofstream outfile;
    string letters;
    promptUserForFile(infile, "Input file: ");
    promptUserForOutfile(outfile,"Output file: ");
    cout<<"Letter to banish: ";
    getline(cin,letters);
    while (true) {
        char ch = infile.get();
        for (int i=0;i<letters.length();i++){
            if (ch!=tolower(letters[i])){
                if(ch!=toupper(letters[i])){
                    outfile.put(ch);}
            }
        }
        if (ch == EOF) break;
    }
    infile.close();
    outfile.close();
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
string promptUserForOutfile(ofstream&outfile, string question){
    while(true){
        cout << question;
        string filename;
        getline(cin, filename);
        outfile.open(filename.c_str());
        if (!outfile.fail()) return filename;
        outfile.clear();
        cout << "Unable to open that file. Try again." << endl;
        if (question == "") question = "Output file: ";
    }
}

