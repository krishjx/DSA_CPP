#include<iostream>
using namespace std;
int main(){
    int a,b,s,sum=0;
    cout<<"Enter The Value Of a:";
    cin>>a;
    cout<<"Enter The Value Of b:";
    cin>>b;
    s=a;
    for(a+1;a+1<b;a++){       //Condition says that lie between a & b not at a & b
        if((a+1)%2==0){       //a+1 exclude when a is even
            sum=(a+1)+sum;
        }
    }
    cout<<"Sum Of Even From "<<s<<" to "<<b<<" is:"<<sum<<"\n";
}