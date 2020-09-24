// TODO: (1) create an include an Integer class
// TODO: (2) create file i/o functions to handle data
// TODO: (3) create a program that reads data from the file into a vector
//  then finds the sum of the data and writes it to an summary.output file

#include <iostream>
#include <fstream>
#include <vector>
#include "integer.h"

using namespace std;

int main() {

    cout << "Enter an integer value ";
    Integer number_1;
    cin >> number_1;

    ifstream input_file;
    input_file >> number_1;

    return 0;
}
