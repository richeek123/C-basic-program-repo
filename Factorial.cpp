#include<iostream>
using namespace std;
int main()
{ 
    int n,fact=1,i=1;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(i=1;i<=n;i=i+1){
        fact=fact*i;
    }
    cout<<"The Factorial is : "<<fact;
}