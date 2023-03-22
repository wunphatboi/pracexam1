#include <iostream>
#include <math.h>
using namespace std;

int sum_of_squares(int n){
    if (n ==1){
        return 1;
    }
    return (pow(n,2)+ sum_of_squares(n-1));
}