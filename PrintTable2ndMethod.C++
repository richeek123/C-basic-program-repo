#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the Table u want to Print: "<<endl;
    cin>>n;
    for(i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }
}