#include <iostream>
#include <fstream>
#include <string>

#include <boost/tokenizer.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "ReadCSV.h"

using namespace std;
using namespace boost;
using namespace boost::numeric::ublas;

Matrix ReadCsv(string data_path) {
    ifstream csv_file;
    string line;
       
    csv_file.open(data_path);
    if (!csv_file.is_open()) return Matrix(1,1,0);

    std::vector<std::vector<double>> parsed_csv;
    while (getline(csv_file, line)) {
	std::stringstream line_stream(line);
	std::string element_string;
	std::vector<double> parsed_row;
	while(std::getline(line_stream, element_string, ',')) {
	    parsed_row.push_back(stod(element_string));
	}
	parsed_csv.push_back(parsed_row);
    }
    csv_file.close();

    if (parsed_csv.size() > 0 && parsed_csv[0].size() > 0) {
	Matrix m(parsed_csv.size(),parsed_csv[0].size(),0);
	int row_idx(0);
	for (auto &row : parsed_csv) {
	    matrix_row<Matrix> mr (m, row_idx);
	    std::copy(row.begin(), row.end(), mr.begin());
	    row_idx++;
	}
	return m;
    }
    else {
	return Matrix(1,1,0);
    }
}
