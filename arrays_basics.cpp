#include <iostream>
using namespace std;

int main (){
    int size = 7;
    int n;
    int a;
    int marks[size] = {45,20,32,14,64,36,87};
    int smallest = INT_MAX;
    int big = INT_MIN;
    for (int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest = marks[i];
        } 
        n = min(marks[i],smallest);
    }

    for (int i=0;i<size;i++){
        if(marks[i]>big){
            big = marks[i];
        } 
        a = max(marks[i],big);
    }

    cout << smallest << endl;
    cout << n << endl;
    cout << big << endl;
    cout << a;
    return 0;
}