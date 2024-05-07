#include <algorithm> // for sort()
#include <iostream>
#include <vector> // for 2D vector
using namespace std;

//Sort by coast/volume
bool sortcost(const vector<double>& v1, const vector<double>& v2)
{
    double c_div_w1  = (double) v1[0]/v1[1], c_div_w2 = (double) v2[0]/v2[1];
    return c_div_w1 > c_div_w2;
}

//Optimize coast
double optc(vector<vector<double>> vec, double &w,int &m)
{
    double c_sigma = 0.0, k_i = 1.0, c_i = 0.0, w_sigma = 0.0, w_i = 0.0, w1 = w;
    int i = 0;
    while (i < m)
    {
    w_i = static_cast< double >(vec[i][1]);
    c_i = static_cast< double >(vec[i][0]);
    if (w_sigma == w1){
        break;
        }
    if (w_sigma < w1) {
        w_sigma = w_sigma + w_i;
        c_sigma = c_sigma + c_i;
    }
    if (w_sigma > w1){
        c_sigma = c_sigma - c_i;
        w_sigma = w_sigma - w_i;
        k_i = static_cast< double >(w1 - w_sigma)/w_i;
        c_sigma = c_sigma + c_i * k_i;
        break;
    }
    i++;
    }
    return static_cast< double > (c_sigma);
}

int main()
{
	// Number of rows;
	int m;
    cin >> m;

	// Number of columns;
	int n = 2;

	// Initializing max weitght;
	double w;
	cin >> w;

	// Initializing vector;
	vector<vector<double>> vec( m , vector<double> (n));

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }


	// Use of "sort()"
	sort(vec.begin(), vec.end(), sortcost);


	cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);
	cout << optc(vec, w, m) << " ";
	return 0;
}
