#include<iostream>
using namespace std;
int printing(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
int a1[6]={4,3,1,7,87,0};
int b1[5]={3,2,5,6,7};
swapAlternate(a1,6);
printing(a1,6);
// cout<<endl
swapAlternate(b1, 5);
printing(b1,5);
return 0;
}