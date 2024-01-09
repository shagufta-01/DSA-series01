#include<iostream>
using namespace std;
 int printCounting(int num){
    for(int i=1; i<=num; i++){
        cout<< i<< " ";
    }cout<<endl;
 }

 int main(){
int n;
cin>>n;
printCounting(n);
return 0;
 }