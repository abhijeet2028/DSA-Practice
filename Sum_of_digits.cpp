#include <iostream>
using namespace std;

int digitsum(int n){
    int lastdig;
    int digsum;
    while (n > 0 ){
        lastdig = n % 10 ;
        n = n/10;
        digsum += lastdig; 
    }
    return digsum;
}

int main(){
    cout <<digitsum(4321);
    return 0;
}