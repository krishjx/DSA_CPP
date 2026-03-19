#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter The Number:";
    cin>>n;
    a=n;                //a store the value of n
    for(int i=2;i<=a;){  //a is used for condition
        if(n%i==0){
            n=n/i;         //n is divide by i and store new value of n
            cout<<i<<",";  //it prints all the FACTORS of n
            i=i;            //check again the remaining n is also divible by same number i
        }
        else{
            i++;        //if remaining n is not divisible by i then i++
        }
    }
    cout<<" are the Factors of "<<a<<"\n";
}