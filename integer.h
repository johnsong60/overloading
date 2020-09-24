//
// Created by Joe on 9/22/2020.
//

#ifndef CSIS_123A_OVERLOADING_EXAMPLE__INTEGER_H_
#define CSIS_123A_OVERLOADING_EXAMPLE__INTEGER_H_
#include <string>
#include <iostream>
using std::istream;
using std::string;
using std::ostream;

class Integer {
 private:
    int data;
 public:
    Integer(int value);
    Integer(const string &value);
    Integer();

    int getInt() const;

    Integer operator+(const Integer &integer);

    friend istream &operator >>(istream &in, Integer &integer);
    friend ostream &operator <<(ostream &out, const Integer &integer);


};

#endif //CSIS_123A_OVERLOADING_EXAMPLE__INTEGER_H_
