#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string promptUserForFile(ifstream & infile, string prompt = "");
void removeComments(istream&is,ostream&os);

int main() {
    ifstream infile;
    promptUserForFile(infile, "Input file: ");
    removeComments(infile,cout);
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

void removeComments(istream&is,ostream&os){
    while(is){
        char c;
        is>>c;
        if(c=='/'|| c=='*'){
            is>>c;
            if(c=='/'){
                while((c!='\n'||(c!='*'&&is.peek()!='/'))&&is)
                    is.get(c);
                continue;
            }
        }
        os<<c;
    }
}
