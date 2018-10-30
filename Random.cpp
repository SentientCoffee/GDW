#include "Random.h"

std::default_random_engine generator;

int randomNum(int low, int high) {
	auto epoch = std::chrono::system_clock::from_time_t(time(nullptr));
	auto start = std::chrono::system_clock::now();
	std::chrono::system_clock::duration duration = epoch - start;

	generator.seed(duration.count());
	std::uniform_int_distribution<int> randomNumbers(low, high);
	
	int random = randomNumbers(generator);
	return random;
}