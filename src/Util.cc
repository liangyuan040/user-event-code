#include "Util.h"

using namespace std;

double Util::calc_cos_similarity(const std::vector<double> & x, const std::vector<double> & y){
	double fenzi = 0, fenmu1 = 0, fenmu2 = 0;
	assert(x.size() == y.size());
	for(int i = 0; i < x.size(); i++){
		fenzi += x[i] * y[i];
		fenmu1 += x[i] * x[i];
		fenmu2 += y[i] * y[i];
	}
	return 1.0 * fenzi / (sqrt(fenmu1 * fenmu2));
}

double Util::calc_euc_distance(double x1, double y1, double x2, double y2){
	double dx = x2 - x1;
	double dy = y2 - y1;
	return sqrt(dx*dx + dy*dy);
}

vector<double> Util::read_line_doubles(const string &line)
{
	stringstream ss(line);
	vector<double> res;
	double number;
	while(ss.good()){
		ss >> number;
		res.push_back(number);
	}
	return res;
}

vector<int> Util::read_line_ints(const string &line)
{
	stringstream ss(line);
	vector<int> res;
	int number;
	while(ss.good()){
		ss >> number;
		res.push_back(number);
	}
	return res;
}


int Util::get_number_of_spaces(const string &line)
{
	int count = 0;
	for(int i = 0; i < line.size(); i++){
		if(line[i] == ' ' || line[i] == '\t'){
			count++;
		}
	}
	return count;
}

