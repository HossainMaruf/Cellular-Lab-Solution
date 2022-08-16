#include <bits/stdc++.h>
using namespace std;

int main() {
	double P_am = 400, k = 0.75, P_c = (2 * P_am)/(2 + (k*k));
	cout << "Carrier Power = " << (P_c/P_am)*100 << "%\n";
	double each_sideband = (P_am-P_c)/2;
	cout << "Each sideband power = " << each_sideband << " kW\n";
	cout << "Power saving = " << (P_am - each_sideband)/P_am*100 << "%\n";
	return 0;
}