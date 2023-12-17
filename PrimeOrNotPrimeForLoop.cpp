#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    bool isprime = 1;
    for(int i = 2; i <= (n-1); i++)
    {
        if(n%i == 0){
            isprime = 0;
            break;
        }
        }
       if(isprime == 1){
        cout<<"Is a Prime number.."<<endl;
       }else
       {
        cout<<"Not a Prime number";
       }
}
