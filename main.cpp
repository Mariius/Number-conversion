#include "NumberConversion.cpp"
#include <iostream>
using namespace std;

int main() { 
    
    int decimal;
    cout <<" test the toBin function" << endl;
    cout <<" convert to binary" << endl;
    cout<<"enter a decimal number: ";
    cin >> decimal; cout<<endl;
    cout<< "bin: " << toBin(decimal)<<endl;

    int decimal1;
    cout <<" test the toHex function" << endl;
    cout <<" convert to hex" << endl;
    cout<<"enter a decimal number: ";
    cin >> decimal; cout<<endl;
    cout<< "hex: " << toHex(decimal1)<<endl;

    int decimal2;
    int base;
    cout <<" test the toBase function" << endl;
    cout <<" convert to hex" << endl;
    cout<<"enter a decimal number: ";
    cin >> decimal; cout<<endl;
    cout<<"enter the base: ";
    cin >> base; cout<<endl;
    cout<< "hex: " << toBase(decimal2,base)<<endl;
    


    
 }
