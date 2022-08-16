#include <bits/stdc++.h>
using namespace std;
int main() {
	int a = 8, f = 4e3, delta = 10, gain = 10, f_deviation = (a*gain);
	cout << "Peak frequency deviation: " << f_deviation << " KHz\n";
	cout << "Frequency modulation index: " << (f_deviation*1000/f) << endl;
	cout << "Phase modulation index: " << (a * delta) << " radians";	
	return 0;
}