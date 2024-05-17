#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
#include <signal.h>

// Define a volatile variable shared between main program and ISR
volatile bool flag = false;

// Signal handler for interrupt (simulating ISR)
void signalHandler(int signal) {
	flag = true;  // Set the flag to true to indicate ISR has occurred
}

int main() {
	// Register signal handler for interrupt (simulating ISR)
	signal(SIGINT, signalHandler);

	// Main program loop
	while (true) {
		if (flag) {
			std::cout << "ISR occurred!\n";
			flag = false;  // Reset the flag after handling ISR
		}

		// Perform other tasks in the main program
		std::cout << "Main program is running...\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	return 0;
}
