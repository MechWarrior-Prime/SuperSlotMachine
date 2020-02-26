#pragma once
#include <vector>
#include <algorithm>

using namespace System;
using namespace std;
using namespace System::Text;

ref class Currency {
protected: int amount = 0; // what the user has to play with
public:
	int getAmount() {
		return amount;
	}
	void changeAmount(int value) { // will be added to amount, so use negative values to subtract
		amount = amount + value;
	}
};
public class CryptIt {
public:
	String^ Encrypt(String^ cleartext) {
		unsigned max = cleartext->Length;
		unsigned short code = 0;

		StringBuilder^ sb = gcnew StringBuilder(cleartext);

		for (unsigned i = 0; i < max; i++) {
			code = cleartext[i];// intrinsic conversion DOES have it's value,after all
			code += (10 + i);
			sb[i] = char(code);
		};
		cleartext = sb->ToString();
		return cleartext;
	}
	String^ Decrypt(String^ cryptotext) {
		unsigned max = cryptotext->Length;
		unsigned short code = 0;

		StringBuilder^ sb = gcnew StringBuilder(cryptotext);

		for (unsigned i = 0; i < max; i++) {
			code = cryptotext[i];// intrinsic conversion DOES have it's value,after all
			code -= (10 + i);
			sb[i] = char(code);
		};
		cryptotext = sb->ToString();
		return cryptotext;
	}
};
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
