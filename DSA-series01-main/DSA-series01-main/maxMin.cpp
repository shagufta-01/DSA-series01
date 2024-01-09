#include <iostream>
using namespace std;
int getMinMax(int ar[] , int N){
   int max = ar[0], min = ar[0];
   for(int i = 1; i < N; i++){
      if(max < ar[i])
         max = ar[i];
      if(min > ar[i])
         min = ar[i];
   }
   cout<<"Maximum Value = "<<max<<"\n";
   cout<<"Minimum Value = "<<min;
}
int main(){
   int arr[100];
   int size;
   cout<<"enter the size of array is"
   cin>>size;
   cout<<"Enter the elements of an array";
   for(int i=0; i<size; i++){
    cin>>arr[i];
   }
   cout<<getMinMax(arr, size);
   return 0;
}