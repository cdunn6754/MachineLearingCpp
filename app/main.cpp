#include <iostream>
#include <fstream>
#include <string>

#include "ReadCSV.h"
#include "LinearRegression.hpp"

int main() {
    string data_str = "../data/ex1data2.txt";
    Matrix mat = ReadCsv(data_str);
    cout << mat << endl;
    // Test creation
    LinearRegression lr(mat);
    return 0;
};
