#include<iostream>
using namespace std;
int printingg(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
int alternateSwap(int arr[], int n){
    for(int i=0; i<n; i+2){
       if(i+1<n){
        swap(arr[i], arr[i+1]);
       }
    }cout<<endl;
}
int main(){cout<<"hello";
int ar[6]= {45,3,2,5,6,76};
int br[4]={7,5,6,4};
alternateSwap(ar,6);
printingg(ar,6);
alternateSwap(br,4);
printingg(br, 4);
 
return 0;
}