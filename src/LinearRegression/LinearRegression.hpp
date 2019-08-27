#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#include <boost/tokenizer.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/geometry/geometry.hpp>

typedef boost::numeric::ublas::matrix<double> matrix; 
typedef boost::numeric::ublas::vector<double> vector;

class LinearRegression {

 private:
    matrix _data_matrix;

 public:
    LinearRegression(matrix);
    double cost(boost::numeric::ublas::vector<double>);    
};
