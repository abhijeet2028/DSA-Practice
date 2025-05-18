#include <iostream>
using namespace std;

void reversearray(int arr[], int sz){
    int start = 0 ;
    int end = sz-1;

    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end --;
    }
}

int main(){
    int arr[7] = {3,6,4,5,7,2,9};
    int sz = 7;
    reversearray(arr,sz);
    for (int i = 0; i < sz; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}