#include<iostream>
using namespace std;
int main(){
    int n,s=0,t;
    cout<<"Enter The Number Variables:";
    cin>>n;
    int arr[n];
    //Taking input
    for(int i=0;i<n;i++){
        cout<<"Enter The Value ";cout<<i+1;cout<<" Varible:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        t=0;                        //for new value of i t=0
        for(int j=0;j<n;j++){
            if(arr[i]<=arr[j]){     //comparing value of two variable
               t=t+1;         //count how many times the variable is small
            }
        }
        if(t==n){   
            cout<<"Smallest Number is:";cout<<arr[i];
            break;
        }
    }
}