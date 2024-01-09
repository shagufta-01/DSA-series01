#include<iostream>
using namespace std;

void reverse(int arr[], int n) {
int start =0;
int end = n-1;
 while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;

 }
}
void printing(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main() {
    int ar[5]={4,3,5,2,7};
    int br[6]={44,32,1,76};
    reverse(ar,5);
    reverse(br,6);
    printing(ar,5);
    printing(br,6);
return 0;
  

 
}