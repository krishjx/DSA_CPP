#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,s;
    cout<<"Enter The Number1:";
    cin>>n1;
    cout<<"Enter The Number2:";
    cin>>n2;
    if(n1>n2){
        s=n2;
    }
    else{
        s=n1;
    }
    i=s;                //store minimum value
    for(i;i>=1;i){
        cout<<i<<"\n";
        if(n1%i==0 and n2%i==0){
            cout<<i;
            break;
        }
    }
}