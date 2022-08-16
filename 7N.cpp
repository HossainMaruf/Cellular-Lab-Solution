#include <bits/stdc++.h>
#define N 70
using namespace std;

double get_del_tau(double delay) { return (delay / N); }
double get_BW(double delay) { return (2 / get_del_tau(delay)); }

int main() {
	double delay_1 = 150, delay_2 = 4, delay_3 = 500e-3;
	cout << "Del Tau of SMRCIM = " << get_del_tau(delay_1) << " us\n";
	cout << "Max. BW of SMRCIM Model = " << get_BW(delay_1) << " MHz\n";
	cout << "Max. BW of Microcell Model = " << get_BW(delay_2) << " MHz\n";
	cout << "Del Tau of Indoor Model = " << get_del_tau(delay_3) << " us\n";
	cout << "Max. BW of Indoor Model = " << get_BW(delay_3) << " MHz\n";

	return 0;
}