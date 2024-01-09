#include<iostream>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=00; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }return 0;
}

int main(){
int arr[10]={21,3,4,5,56,32,878,89,6,55};
cout<<"enter a value here you want to search :"<<endl;
int key;
cin>>key;
bool found = search(arr, 10, key);
if(found){
    cout<<"key us present"<<endl;
}else{
    cout<<"key is absent"<<endl;
}
}