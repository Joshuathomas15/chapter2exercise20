#include <iostream>
using namespace std;

int main()
{
	// How much paint

	// input
	const float PAINT_COVERAGE = 340; // sqft per gallon

		float height = 6,
		length = 100,
		// process
		area = height * length,
		totalarea = area * 2,
		gallonsneeded = totalarea / PAINT_COVERAGE;

	// output

	cout << endl
		<< "fence dimension     :"                   << endl
		<< " height             :" << height         << endl
		<< "length              : " << length        << endl
		<< " total area         : " << totalarea     << endl
		<< " coverage per gallon:" << PAINT_COVERAGE << endl
		<< " gallons neeed      :" << gallonsneeded  << endl
		<< endl;

	return 0;

} 


