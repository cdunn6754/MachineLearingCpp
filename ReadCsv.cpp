#include <iostream>
#include <fstream>
#include <string>

#include <boost/tokenizer.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "ReadCsv.h"

using namespace std;
using namespace boost;
using namespace boost::numeric::ublas;

Matrix ReadCsv(string data_path) {
    ifstream csv_file;
    Matrix m(47,3,0);
    string line;
       
    csv_file.open(data_path);
    if (!csv_file.is_open()) return Matrix(1,1,0);

    int row_idx = 0;
    while (getline(csv_file, line)) {
	Tokenizer tok(line);
	boost::numeric::ublas::vector<double> vec(3);
	auto vec_it = vec.begin();
	for (auto &s : tok){
	    *vec_it = stod(s);
	    vec_it++;
	}
	row(m, row_idx) = vec;
	row_idx++;  
    }
    csv_file.close();
    return m;
}
