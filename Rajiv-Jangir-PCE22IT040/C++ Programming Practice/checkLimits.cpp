#include<iostream>
#include<limits>
using namespace std;

int main()
{
    cout<<"The Range of short is "<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()<<endl;
    cout<<"The Range of unsigned short is "<<numeric_limits<unsigned short>::min()<<" to "<<numeric_limits<unsigned short>::max()<<endl;
    cout<<"The Range of int is "<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
    cout<<"The Range of unsigned int is "<<numeric_limits<unsigned int>::min()<<" to "<<numeric_limits<unsigned int>::max()<<endl;
    cout<<"The Range of long is "<<numeric_limits<long>::min()<<" to "<<numeric_limits<long>::max()<<endl;
    cout<<"The Range of float is "<<numeric_limits<float>::min()<<" to "<<numeric_limits<float>::max()<<endl;
    cout<<"The Range of double is "<<numeric_limits<double>::min()<<" to "<<numeric_limits<double>::max()<<endl;
    cout<<"The Range of long double is "<<numeric_limits<long double>::min()<<" to "<<numeric_limits<long double>::max()<<endl;
    

}