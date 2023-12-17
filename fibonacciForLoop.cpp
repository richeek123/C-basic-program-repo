#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. you wnat to print the series: "<<endl;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    int nextnum;
    for(int i =1 ;i<=n; i++){
        nextnum = a+b;
        cout<<nextnum<<" ";
        a = b;
        b = nextnum;
    }

}