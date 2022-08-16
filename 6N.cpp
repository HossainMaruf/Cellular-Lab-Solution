#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int c = 3e8, f = 9e8;	
	long double lambda = (double)c / f, v = ((70 * 1000) / 3600), Df = v / lambda;
	cout << setprecision(6) << fixed;
	std::cout << "Received frequency when Theta 0 degree: " << (f + Df) / 1e6 << " MHz" << std::endl;
	std::cout << "Received frequency when Theta 180 degree: " << (f - Df) / 1e6 << " MHz" << std::endl;
	std::cout << "Received frequency when Theta 90 degree: " << f / 1e6 << " MHz" << std::endl;

	return 0;
}
