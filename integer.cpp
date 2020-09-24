//
// Created by Joe on 9/22/2020.
//

#include "integer.h"
#include <string>

using std::stoi;

Integer::Integer(int value): data(value) {}

Integer::Integer(const string &value): Integer(stoi(value)) {
}

Integer::Integer():Integer(0) {
}

int Integer::getInt() const {
  return data;
}
Integer Integer::operator+(const Integer &integer) {
  return Integer(data + integer.data);
}

istream &operator >>(istream &in, Integer &integer){
  in >> integer.data;
   return in;
}
