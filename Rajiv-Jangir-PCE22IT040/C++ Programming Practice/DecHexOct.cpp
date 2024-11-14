#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int pos_int{73782};
    int neg_int{-2334};
    double double_var{498.32};

    cout<<endl;
    cout<<"Default Answer is :\n";
    cout<<"pos_int ="<<pos_int<<endl;
    cout<<"neg_int ="<<neg_int<<endl;
    cout<<"double_var ="<<double_var<<endl;
    cout<<endl;

    cout<<"Answer of pos_int in form of Dex Hex Oct is :\n";
    cout<<"pos_int(dec) ="<<dec<<pos_int<<endl;
    cout<<"pos_int(hex) ="<<hex<<pos_int<<endl;
    cout<<"pos_int(oct) ="<<oct<<pos_int<<endl;
    cout<<endl;
    
    cout<<"Answer of neg_int in form of Dex Hex Oct is :\n";
    cout<<"neg_int(dec) ="<<dec<<neg_int<<endl;
    cout<<"neg_int(hex) ="<<hex<<neg_int<<endl;
    cout<<"neg_int(oct) ="<<oct<<neg_int<<endl;
    cout<<endl;

    cout<<"Answer of double_var in form of Dex Hex Oct is :\n";
    cout<<"double_var(dec) ="<<dec<<double_var<<endl;
    cout<<"double_var(hex) ="<<hex<<double_var<<endl;
    cout<<"double_var(oct) ="<<oct<<double_var<<endl;
    cout<<endl;

}
