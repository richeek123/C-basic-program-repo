#include<iostream>
using namespace std;

char convert(char c){
    char ans = c - 'a' + 'A';
    return ans;
}

int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    cout<<convert(ch)<<endl;
}