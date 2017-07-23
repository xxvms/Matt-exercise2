// Matt-exercise2.cpp : Defines the entry point for the console application.
//
#include <cstddef>
#include <iostream>			// std::
#include <iterator>
#include <numeric>			// `std::accumulate` 
#include <vector>			// vector

std::ostream & operator<<(std::ostream & os, const std::vector<double>& vector) {
	for (size_t i = 0; i < vector.size(); i++ )
	{
		return os << vector.at(i);
	}
}


int main()
{
	const std::size_t size = 5;
	const double initial_value = 11;
	std::vector<double> vector{ 1.0, 1.5, 2.0 };

	std::cout << "Contents of the vector: ";
	for (auto element : vector) std::cout << element << ' ';
	std::cout << '\n';

	/*std::cout << "Calling `std::iota`\n";
	std::iota(begin(vector), end(vector), initial_value);*/
	
	std::cout << "Calling 'std::accumulate'\n";
	double sum = std::accumulate(vector.begin(), vector.end(), initial_value);
	std::cout << "Sum: " << sum << '\n';


	std::cout << "Calling 'std::accumulate'\n";
	double product = std::accumulate(vector.begin(), vector.end(), initial_value, std::multiplies<double>());
	std::cout << "Multiplies: " << sum << '\n';

	std::cout << "Contents of the vector: ";
	for (auto element : vector) std::cout << element << ' ';
	std::cout << '\n';

	std::cout << "lets see.." << '\n';
	std::cout << vector << '\n';
}