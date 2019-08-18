#include <iostream>
#include <fstream>
#include <string>

#include "CsvReader.h"

int main() {
    string data_str = "app/data/ex1data2.txt";
    CsvReader::Matrix mat = CsvReader::ReadCsv(data_str);
    cout << mat << endl;
    return 0;
};
