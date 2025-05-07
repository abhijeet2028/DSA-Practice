#include<iostream>
using namespace std;

func(int n){
    int factn = 1;

    for(int i = 1; i <= n;i++){
        factn *= i;
    }
    return factn;
}
nCr(int n, int r){
    int factn = func(n);
    int factr = func(r);
    int facta = func(n-r);
    int factorial = factn/(factr*facta);
    return factorial;
}

int main (){
    
    cout << "Binomial Coeffient is - "<< nCr(4,2);
    return 0;

}