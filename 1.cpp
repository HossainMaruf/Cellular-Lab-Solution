#include <bits/stdc++.h>

int main() {
	int total_BW = 33e3, channel_BW = 25 * 2, possible_channel = total_BW / channel_BW;
	int control_channel = 1e3 / channel_BW, voice_channel = possible_channel - control_channel;
	std::cout << "Total channels = " << possible_channel << std::endl;
	std::cout << "For N = 4, channels per cell = " << possible_channel / 4 << std::endl;
	std::cout << "For N = 7, channels per cell = " << possible_channel / 7 << std::endl;
	std::cout << "For N = 12, channels per cell = " << possible_channel / 12 << std::endl;

	std::cout << "Possible control channels = " << control_channel << std::endl;
	std::cout << "Possible voice channels = " << voice_channel << std::endl;

	std::cout << "Control channel in each cell for N = 4 => " << control_channel / 4 << std::endl;
	std::cout << "Voice channels in each cell for N = 4 => " << voice_channel / 4 << std::endl;

	std::cout << "Control channel in each cell for N = 7 => " << control_channel / 7 << std::endl;
	std::cout << "Voice channels in each cell for N = 7 => " << voice_channel / 7 << std::endl;

	std::cout << "Control channel in each cell for N = 12 => " << control_channel / 12 << std::endl;
	std::cout << "Voice channels in each cell for N = 12 => " << voice_channel / 12 << std::endl;

	return 0;
}