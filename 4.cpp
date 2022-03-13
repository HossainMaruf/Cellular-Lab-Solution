#include <bits/stdc++.h>

int get_A(int channel) {
	switch(channel) {
		case 19:
			return 12; break;
		case 57:
			return 45; break;	
		case 100:
			return 88; break;
	}
}

int main() {
	double Au = (double)(3*2)/60, GOS = 0.02;
	long long int total_A, total_B, total_C, total, people = 2e6;

	total_A = round((394 * (get_A(19) / Au)));
	total_B = round((98 * (get_A(57) / Au)));
	total_C = round((49 * (get_A(100) / Au)));

	std::cout << "Total in System A = " << total_A << std::endl;
	std::cout << "Total in System B = " << total_B << std::endl;
	std::cout << "Total in System C = " << total_C << std::endl;

	total = total_A + total_B + total_C;
	std::cout << "Total in A, B and C = " << total << std::endl;

	std::cout << "Penetration in System A = " << (float)total_A*100 / people << " %" << std::endl;
	std::cout << "Penetration in System B = " << (float)total_B*100 / people << " %" << std::endl;
	std::cout << "Penetration in System C = " << (float)total_C*100 / people << " %" << std::endl;
	std::cout << "Total market penetration = " << (float)total*100 / people << " %" << std::endl;

	return 0;
}