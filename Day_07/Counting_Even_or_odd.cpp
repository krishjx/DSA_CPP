#include<iostream>
using namespace std;
int main(){
    int e=0,o=0,n;
    cout<<"Enter The Size Of Array(Integer):";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter The Value in ";cout<<i+1;cout<<"Array:";
        cin>>arr[i];        
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            e=e+1;
        }
        else{
            o=o+1;
        }
    }
    cout<<"Number Of Even Number Entered By User:";cout<<e;
    cout<<"\n";cout<<"Number Of Odd Number Entered By User:";cout<<o;
}