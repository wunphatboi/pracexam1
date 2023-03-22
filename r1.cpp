#include <iostream>
#include <math.h>

int sum_of_squares(int n,int acc){
    if (n ==1){
        return acc;
    }
    return sum_of_squares(n-1,acc + pow(n,2));
}

int helper(int n){
    return sum_of_squares(n,1);
}
