#include <bits/stdc++.h>
#define PI 3.1416

double W_to_dBm(float watt) {
	return 10 * log10(watt * 1e3);
}
double W_to_dBw(float watt) {
	return 10 * log10(watt);
}

int main() {
	float transmitter_power = 50, Gt = 1, Gr = 1, fc = 9e8, v = 3e8, lambda = v / fc, d = 100;
	std::cout << "Transmitter power in dBm " << W_to_dBm(transmitter_power) << std::endl;
	std::cout << "Transmitter power in dBw " << W_to_dBw(transmitter_power) << std::endl;

	float received_power_in_watt = transmitter_power * Gt * Gr * pow(lambda / (4 * PI * d), 2);
	std::cout << "Received power in dBm " << W_to_dBm(received_power_in_watt) << std::endl;

	d = 10e3;

    received_power_in_watt = transmitter_power * Gt * Gr * pow(lambda / (4 * PI * d), 2);
	std::cout << "Received power in dBm " << W_to_dBm(received_power_in_watt) << std::endl;

	return 0;
}
