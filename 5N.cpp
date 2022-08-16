#include <bits/stdc++.h>
#define PI 3.1416

int main() {
	long long int c = 3e8, f = 9e8, D = 1;
	double lambda = (double)c / f, Df = (2*D*D) / lambda;
	double Pl = -10 * log10(pow((lambda) / (4 * PI * Df), 2));
	// std::cout << lambda << " " << Df << " " << Pl << std::endl;	
	std::cout << "Path loss = " << Pl <<" dB" << std::endl;
	return 0;
}