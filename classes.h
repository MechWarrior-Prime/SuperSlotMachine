#pragma once
#include <vector>
#include <algorithm>

using namespace System;
using namespace std;

public class Drum {
public:
	Drum() {
		sign = { '0','1','2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	}
private:
	vector<char> sign;
	vector<char> result;// will contain 3 chars:the actual char and the one above and below it
public:
	// have you called InitRNG() yet?
	vector<char> Drum::spin(Boolean spin_backwards) { // spins the drum to show a sign
		if (spin_backwards) reverse(sign.begin(), sign.end());
		unsigned i = (rand() % 16); //separated for easier debug
		if (i == 0) {
			result.push_back(sign[15]); // the one below
			result.push_back(sign[i]); // the one rolled
			result.push_back(sign[1]); //the one above
		}
		else if (i == 15) {
			result.push_back(sign[14]); // the one below
			result.push_back(sign[i]); // the one rolled
			result.push_back(sign[1]); //the one above
		}
		else
		{
			result.push_back(sign[i - 1]); // the one below
			result.push_back(sign[i]); // the one rolled
			result.push_back(sign[i + 1]); //the one above
		}

		return result;
	}
};
