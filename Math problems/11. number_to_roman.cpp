// Numerical values to Roman.

/*
	Roman numerals, as they are known today, use seven symbols: I = 1, V = 5, X = 10, L = 50, C
  = 100, D = 500, and M = 1000. The system uses additions and subtractions in composing the
  numerical symbols. The symbols from 1 to 10 are I, II, III, IV, V, VI, VII, VIII, IX, and X.
  Romans did not have a symbol for zero and used to write nulla to represent it. In this
  system, the largest symbols are on the left, and the least significant are on the right. As an
  example, the Roman numeral for 1994 is MCMXCIV. If you are not familiar with the rules
  for Roman numerals, you should read more on the web.

*/

using namespace std;

string to_roman(unsigned int value) {
	vector<std::pair<unsigned int, char const*>> roman {
		{ 1000, "M" },{ 900, "CM" }, { 500, "D" },{ 400, "CD" },
		{ 100, "C" },{ 90, "XC" }, { 50, "L" },{ 40, "XL" },
		{ 10, "X" },{ 9, "IX" }, { 5, "V" },{ 4, "IV" }, { 1, "I" }};

	string result;
	for (auto const & kvp : roman) {
		while (value >= kvp.first) {
			result += kvp.second;
			value -= kvp.first;
		}
	}

	return result;
}

int main() {

	for (int i = 1; i <= 100; ++i) {
		cout << i << "\t" << to_roman(i) << endl;
	}

	int number = 0;

	cout << "number";
	cin >> number;

	cout << to_roman(number) << endl;

	return 0;
}
