#include <iostream>
#include <string>

using namespace std;

class Similarity {
public:
	Similarity(const string& str)
		: target(str), targetLength(str.size()) {}

	int similarityLength(const string& str) {
		int inputLength = str.size();

		if (inputLength == targetLength) return 60;
		if (inputLength >= 2 * targetLength 
			|| 2 * inputLength <= targetLength) return 0;
		return (1 - abs(inputLength - targetLength) / smaller(inputLength)) * 60;
	}

private:
	int smaller(int inputLength)
	{
		return (inputLength < targetLength) ? inputLength : targetLength;
	}

	string target{};
	int targetLength{};
};