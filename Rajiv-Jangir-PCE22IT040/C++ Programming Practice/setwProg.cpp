#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    cout<<"Formatted in table Form :\n";
    cout<<setw(10)<<"FirstName"<<setw(15)<<"LastName"<<setw(5)<<"Age"<<endl;
    cout<<setw(10)<<"Rajiv"<<setw(15)<<"Jangir"<<setw(5)<<"21"<<endl;
    cout<<setw(10)<<"NB"<<setw(15)<<"Rajshekhar"<<setw(5)<<"22"<<endl;
    cout<<setw(10)<<"Himanshu"<<setw(15)<<"Agarwal"<<setw(5)<<"21"<<endl;
    cout<<setw(10)<<"Lakshya"<<setw(15)<<"Sharma"<<setw(5)<<"20"<<endl;
    
    cout<<"Formatted in table Form with col_width :\n";
    int col_width{15};
    cout<<left;
    cout<<setw(col_width)<<"FirstName"<<setw(col_width)<<"LastName"<<setw(col_width)<<"Age"<<endl;
    cout<<setw(col_width)<<"Rajiv"<<setw(col_width)<<"Jangir"<<setw(col_width)<<"21"<<endl;
    cout<<setw(col_width)<<"NB"<<setw(col_width)<<"Rajshekhar"<<setw(col_width)<<"22"<<endl;
    cout<<setw(col_width)<<"Himanshu"<<setw(col_width)<<"Agarwal"<<setw(col_width)<<"21"<<endl;
    cout<<setw(col_width)<<"Lakshya"<<setw(col_width)<<"Sharma"<<setw(col_width)<<"20"<<endl;
    
}