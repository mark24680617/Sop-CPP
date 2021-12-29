
#ifndef CLION_PROJECTS_HW2_CIRCLE_TEST_H
#define CLION_PROJECTS_HW2_CIRCLE_TEST_H


double sqrt(double x){
    double g;
    g=x/2;
    for (int i=1; i<999; i++){
        g=(g+x/g)/2;
    }
    return g;
}


#endif
