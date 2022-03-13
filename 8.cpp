#include <bits/stdc++.h>

int main() {
	double fc = 1.8; // frequency in GHz
	int hb = 20; // height of base station
	double d = pow(20*20 + 30*30, 0.5) / 1000; // distance between BS and MS in kilometer unit

	double path_loss = 135.41 + 12.49 * log10(fc) - 4.99 * log10(hb) + (46.84 - 2.34 * log10(hb)) * log10(d);

	std::cout << path_loss << " dB" << std::endl;

	return 0;
}