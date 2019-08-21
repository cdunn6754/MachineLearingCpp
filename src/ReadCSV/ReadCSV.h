#include <iostream>
#include <fstream>
#include <string>

#include <boost/tokenizer.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>

typedef boost::numeric::ublas::matrix<double> Matrix;
typedef boost::tokenizer<boost::escaped_list_separator<char>> Tokenizer;

using namespace std;

boost::numeric::ublas::matrix<double> ReadCsv(string);
