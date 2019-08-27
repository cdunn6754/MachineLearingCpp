#include "LinearRegression.hpp"

LinearRegression::LinearRegression(matrix data_matrix) {
    _data_matrix = data_matrix;
    std::cout << "\nwe did it: \n" << std::endl;

    // for(matrix::iterator1 r_itr = data_matrix.begin1(); r_itr != data_matrix.end1(); r_itr++) {
    // 	vector row(data_matrix.size2());
    // 	std::copy(r_itr.begin(), r_itr.end(), row.begin());
    // 	std::cout << "printing row values" << std::endl;
    // 	for (auto itr = row.begin(); itr != row.end(); itr++) {
    // 	    std::cout << *itr << ", ";
    // 	}
    // 	std::cout << std::endl;
    // 	double inner = inner_prod(row, row);	
    // 	std::cout << inner << std::endl;
    // }

};

double LinearRegression::cost(vector theta) {
    double cost(0.0);
    for (auto r_itr = _data_matrix.begin1(); r_itr != _data_matrix.end1(); r_itr++) {
	vector x(_data_matrix.size2());
	x[0] = 1;
	x[1] = *r_itr.begin();
	double y = *(r_itr.begin() + 1);
        cost += pow(inner_prod(theta, x) - y, 2);
    }
    cost /= (2*_data_matrix.size1());
    std::cout << cost << std::endl;    
}
