#include<iostream>
using namespace std;
bool isEven(int n){


if(n&1){
    return 0;
}
else{
    return 1;
}}



int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"The number "<<num<<" is even."<<endl;

    }
    else{
        cout<<"The number "<<num<<" is odd."<<endl;
    }
    return 0;
}