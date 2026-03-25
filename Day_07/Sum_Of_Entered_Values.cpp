#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter The Number of Variable:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter The Value Of "; cout<<i+1; cout<<" Variable:";
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    cout<<sum;
}