#ifndef NUMBER_CONVERSION_CPP_H
#define NUMBER_CONVERSION_CPP_H

#include <iostream>
#include <string>
using namespace std;

#define printf(fmt, ...) cout << "printf() is not supported by this Framework. Please use cout."

string toBin(int decimalNumber);

string toHex(int decimalNumber);

string toBase(int decimalNumber, int base);

#endif