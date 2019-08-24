#include "LinearRegression.hpp"

using namespace std;
using namespace boost;
using namespace boost::numeric::ublas;

LinearRegression::LinearRegression(Matrix data_matrix) {
    _data_matrix = data_matrix;
    cout << "\nwe did it: \n" << data_matrix << endl;
};
