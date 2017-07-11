#ifndef LH_LOG_FUNCTIONS_H
#define LH_LOG_FUNCTIONS_H

#include <vector>

using namespace std;

double logdiff(double a, double b);

double logsum(double a, double b);

double log_big_sum(vector<double>& R);

double log_weighted_big_sum(vector<double>& R, vector<size_t>& counts);

#endif