

#ifndef CLION_PROJECTS_HW2_error_h
#define CLION_PROJECTS_HW2_error_h
#include <iostream>
#include <cstdlib>
using namespace std;

void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}

#endif