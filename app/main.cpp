#include <iostream>
#include <fstream>
#include <string>

#include "ReadCSV.h"
#include "LinearRegression.hpp"

int main() {
    string data_str = "../data/ex1data1.txt";
    Matrix mat = ReadCsv(data_str);
    cout << mat << endl;
    // Test creation
    LinearRegression lr(mat);
    boost::numeric::ublas::vector<double> theta(2);
    theta.clear();
    lr.cost(theta);
    return 0;
};
