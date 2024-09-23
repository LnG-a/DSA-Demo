#include<iostream>

using namespace std;

void add(int a[]){
    a[0]++;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    add(arr);
    
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}