#include <iostream>
using namespace std;

int BintoDec(int n){
    int ans = 0, pow = 1;
    int rem;
    
    while(n>0){
        rem = n%10;
        ans+=rem*pow;
        n/=10;
        pow*=2;
    }
    return ans;
}

int main(){
    cout << BintoDec(101010);
    return 0;
}