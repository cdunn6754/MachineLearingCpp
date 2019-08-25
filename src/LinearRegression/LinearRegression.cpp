#include "LinearRegression.hpp"

using namespace std;
using namespace boost;
using namespace boost::numeric::ublas;

LinearRegression::LinearRegression(Matrix data_matrix) {
    _data_matrix = data_matrix;
    cout << "\nwe did it: \n" << endl;

    for(Matrix::iterator1 r_itr = data_matrix.begin1(); r_itr != data_matrix.end1(); r_itr++) {
    	boost::numeric::ublas::vector<double> row(data_matrix.size2());
    	std::copy(r_itr.begin(), r_itr.end(), row.begin());
    	cout << "printing row values" << endl;
    	for (auto itr = row.begin(); itr != row.end(); itr++) {
    	    cout << *itr << ", ";
    	}
	cout << endl;
	double inner = inner_prod(row, row);	
    	cout << inner << endl;
    }

};
