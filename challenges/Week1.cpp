#include <iostream>
#include <string>
#include <vector>

//getting to know the user!
void UserInfo(std::string Username, int Age) {
	std::cout << "Hello, " << Username << "! It's great to meet you.\n"
		<< "You're " << Age << " years old. That's fantastic!" << std::endl;
}

//some quick conversions! 
float celsiusToFahrenheit(float celsius) {
	return (celsius * 9 / 5) + 32; //the formula
}

float kilometersToMiles(float kilometers) {
	return kilometers * 0.621;
}

float poundsToKilograms(float pounds) {
	return pounds * 0.454;
}

float dollarsToEuros(float dollars) {
	return dollars * 0.85;
}

//average out 4 numbers
float calculateAverage(float num1, float num2, float num3, float num4) {
	return (num1 + num2 + num3 + num4) / 4; // Just add and divide
}

// Time to crunch some numbers with 5 integers!
int calculateSum(const std::vector<int>& nums) {
	int sum = 0;
	for (int num : nums) {
		sum += num; // Adding it up
	}
	return sum;
}

void findMinMax(const std::vector<int>& nums, int& min_value, int& max_value) {
	min_value = nums[0];
	max_value = nums[0];
	for (int num : nums) {
		if (num > max_value) max_value = num; // Who's the biggest
		if (num < min_value) min_value = num; // Who's the smallest
	}
}

bool searchNumber(const std::vector<int>& nums, int search_val) {
	for (int num : nums) {
		if (num == search_val) return true; // found it.
	}
	return false; //not here.
}

int main() {
	std::string Username;
	int Age;

	//introductions name,age
	std::cout << "Hi there! Could you share your full name with me? ";
	std::getline(std::cin, Username);

	std::cout << "Awesome! Now, how old are you? ";
	std::cin >> Age;
	UserInfo(Username, Age);

	//conversions
	float celsius;
	std::cout << "\nLet's talk about temperatures! How many degrees Celsius? ";
	std::cin >> celsius;
	std::cout << "That's " << celsiusToFahrenheit(celsius) << " F. Stay cozy, whether it's cool or warm!" << std::endl;

	float kilometers;
	std::cout << "\nHow far are we going? Enter the distance in kilometers: ";
	std::cin >> kilometers;
	std::cout << "That's approximately " << kilometersToMiles(kilometers) << " miles. A real journey ahead!" << std::endl;

	float pounds;
	std::cout << "\nHow much do you weigh in pounds? ";
	std::cin >> pounds;
	std::cout << "That's about " << poundsToKilograms(pounds) << " kilograms!" << std::endl;

	float dollars;
	std::cout << "\nLet’s talk about money. How many dollars would you like to convert? ";
	std::cin >> dollars;
	std::cout << "That's roughly " << dollarsToEuros(dollars) << " euros. Spend wisely and smartly!" << std::endl;

	//some math magic with averages.
	float num1, num2, num3, num4;
	std::cout << "\nNow, let's calculate the average of 4 float numbers. Please enter 4 numbers: ";
	std::cin >> num1 >> num2 >> num3 >> num4;
	std::cout << "The average of the 4 numbers is: " << calculateAverage(num1, num2, num3, num4) << std::endl;

	//number crunching with 5 integers
	std::vector<int> numbers(5);
	std::cout << "\nLet's do some math with 5 integers now! Please enter 5 numbers, one at a time: ";
	for (int i = 0; i < 5; ++i) {
		std::cin >> numbers[i];
	}

	std::cout << "The sum of all these numbers is: " << calculateSum(numbers) << std::endl;

	int min_num, max_num;
	findMinMax(numbers, min_num, max_num);
	std::cout << "The largest number is: " << max_num << ", and the smallest one is: " << min_num << std::endl;

	int search_value;
	std::cout << "\nEnter a number you'd like to find in the list: ";
	std::cin >> search_value;

	if (searchNumber(numbers, search_value)) {
		std::cout << "Yes! " << search_value << " is in the list! Great choice!" << std::endl;
	}
	else {
		std::cout << "Oops! " << search_value << " isn't in the list. Maybe it's hiding somewhere?" << std::endl;
	}

	return 0;
}
