#include <iostream>
using namespace std;

void stars(int n){
    if (n == 1){
        cout << "*" << endl;
        return;
    }
    cout << "*";
    return stars(n-1);
}