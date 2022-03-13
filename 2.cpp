#include <bits/stdc++.h>
#define STD 15 
#define COCHANNEL 6

double cochannel_reuse_ratio(int N) {
	return sqrt(3 * N);
}

double in_dB(double result) {
	return 10 * log10(result);
}

int main() {
	// If 6 co-channel then N = 7 cell reuse
	int alpha = 4, N = 7;
	double result = pow(cochannel_reuse_ratio(N), alpha) / COCHANNEL;
	if(in_dB(result) >= STD) std::cout << "7 cell can be used when exponent 4" << std::endl;
	else std::cout << "7 cell can not be used when exponent 4" << std::endl;

	alpha = 3;
	result = pow(cochannel_reuse_ratio(N), alpha) / COCHANNEL;
	if(in_dB(result) >= STD) std::cout << "7 cell can be used when exponent 3" << std::endl;
	else std::cout << "7 cell can not be used when exponent 3" << std::endl;

	// if i = j = 2 then N = 12
	N = 12;
	result = pow(cochannel_reuse_ratio(N), alpha) / COCHANNEL;
	if(in_dB(result) >= STD) std::cout << "12 cell can be used when exponent 3" << std::endl;
	else std::cout << "12 cell can not be used when exponent 3" << std::endl;

	return 0;
}