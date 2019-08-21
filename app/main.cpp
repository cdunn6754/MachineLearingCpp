#include <iostream>
#include <fstream>
#include <string>

#include "ReadCSV.h"

int main() {
    string data_str = "../app/data/ex1data2.txt";
    Matrix mat = ReadCsv(data_str);
    cout << mat << endl;
    return 0;
};
