#include<iostream>
#include<string>
using namespace std;

int main()
{
    string full_name;
    int age;
    cout<<"Enter your full name:"<<endl;
    getline(cin,full_name);
    cout<<"Enter your age:"<<endl;
    cin>>age;

    cout<<full_name<<" you are "<<age<<" year old:"<<endl;

    return 0;
}