#include <bits/stdc++.h>
#define PI 3.1416

double W_to_dBm(float watt) {
	return 10 * log10(watt * 1e3);
}

double W_to_dBw(float watt) {
	return 10 * log10(watt);
}

double dB_to_gain(float db) {
	return pow(10, db / 10);
}


int main() {
	double c = 3e8, f = 9e8, lambda = c / f, L = lambda / 4, hr = 1.5, ht = 50, G, gain_in_db = 2.55;
	double Er, Pr, E0 = 1e-3, d0 = 1e3, d = 5e3 ;

	std::cout << "Receiver antenna length: " << L << " meter" << std::endl;

	G = dB_to_gain(gain_in_db);
	std::cout << "Receiver antenna gain, G = " << G << std::endl;

	Er = (4*PI*hr*ht*E0*d0) / (lambda * pow(d , 2));
	Pr = (G * pow(lambda * Er, 2)) / (1508 * PI);

	std::cout << "Received power in watt = " << Pr << std::endl;
	std::cout << "Received power in dBm = " << W_to_dBm(Pr) << std::endl;
	std::cout << "Received power in dBw= " << W_to_dBw(Pr) << std::endl;

	return 0;
}