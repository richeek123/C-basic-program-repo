#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the Table: "<<endl;
    cin>>n;
    for(i=1;i<=10;i=i+1)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}