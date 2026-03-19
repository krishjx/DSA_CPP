#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,s;
    cout<<"Enter The Number1:";
    cin>>n1;
    cout<<"Enter The Number2:";
    cin>>n2;
    for(i=n1;i<=n1*n2;n1=i+n1){
        if(i%n2==0){
            cout<<i;
            s=i;
            break;
        }
        cout<<"\n"<<((n1*n2)/s);
    }
}