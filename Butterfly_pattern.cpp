#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the no. - ";
    cin >> n;
    cout <<endl;

    for (int i = 0; i < n ; i++){

        for(int j = 0; j < i+1; j++){

            cout << "*" ;
       
        }

        for(int j = 0; j < n-i-1; j++){

            cout <<" ";
        }

        for(int j = n-i-1; j > 0; j--){

            cout << " ";
        }

        for(int j=0;j<i+1;j++){
            cout << "*";
        }

        cout << endl;
    }

    for(int i = 0; i < n ; i++){

        for (int j = 0; j < n-i; j++){
            cout << "*";
        }
        for (int j = 0; j <i;j++ ){
            cout << " ";
        }

        for (int j = 0; j <i;j++ ){
            cout << " ";
        }

        for (int j = 0; j < n-i; j++){
            cout << "*";
        }

        cout <<endl;
    }
    return 0;
}