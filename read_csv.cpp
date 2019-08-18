#include <iostream>
#include <fstream>
#include <string>

#include <boost/tokenizer.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>

using namespace std;
using namespace boost;
using namespace boost::numeric::ublas;

int main() {
    ifstream csv_file;
    string line;
    //vector<double> vec(2,0);
    matrix<double> m(47,3,0);
    cout << m(1,1) << endl;

    typedef tokenizer<escaped_list_separator<char>> Tokenizer;
       
    csv_file.open("app/data/ex1data2.txt");
    if (!csv_file.is_open()) return 1;

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
    cout << m << endl;
    csv_file.close();
}
