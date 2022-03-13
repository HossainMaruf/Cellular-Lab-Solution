#include <bits/stdc++.h>

int main() {
	int fc = 900; // frequency in MHz
	int d = 4; // distance between MS and BS in kilometer unit
	int hm = 2; // height of mobile station in meter unit
	int hb = 100; // height of base station in meter unit

	double a_of_hm = 3.2 * pow(log10(11.75 * hm),2) - 4.97;
	double path_loss = 69.55 + 26.16 * log10(fc) - 13.82 * log10(hb) - a_of_hm + (44.9 - 6.55 * log10(hb)) * log10(d);

	std::cout << a_of_hm << " dB" << std::endl;
	std::cout << path_loss << " dB" << std::endl;

	return 0;
}