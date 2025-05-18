#include <iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {3,6,4,5,7,2,9};
    int sz = 7;
    int target = 5;
   cout << linearsearch(arr,sz,target);
   return 0;
}