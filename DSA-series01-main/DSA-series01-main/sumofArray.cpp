#include<iostream>
using namespace std;
int sumofArrray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }return sum;
}

int main(){
int ar[100];
int size;
cout<<"enter size of arr;"<<" ";
cin>>size;
cout<<"enter array elements"<<"  ";
for(int i=0; i<size; i++){
    cin>>ar[i];
}cout<<"sum of array are =>"<<sumofArrray(ar, size);


    return 0;
}
