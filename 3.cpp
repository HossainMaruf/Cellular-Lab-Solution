#include <bits/stdc++.h>
#define GOS 0.5/100
#define TI 0.1
/**
 * Formula - U = A / Au
 * A will be selected based on number of channel and GOS from table
 * If No. of channel = 1 then A = GOS
 * Au is TI (Traffic Intensity)
 */
double get_A(int channel) {
	switch(channel) {
		case 1:
			return GOS; break;
		case 5:
			return 1.13; break;
		case 10:
			return 3.96; break;	
		case 20:
			return 11.1; break;
		case 100:
			return 80.9; break;	
		default:
			return GOS;
	}
}

int main() {
	int channel;	
	float result;
	while(1) {
		std::cout << "Enter number of channel : ";
		std::cin >> channel;
		result = round(get_A(channel) / TI); 
		if(result < 1) result += 1;
		std::cout << "Total Users For GOS " << GOS << " = " << result << std::endl;
	}

	return 0;
}
