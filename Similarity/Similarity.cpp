#include <iostream>
#include <string>

using namespace std;

constexpr int maxScore = 60;

class Similarity {
public:
	Similarity(const string& str)
		: target(str), targetLength(str.size()) {}

	int similarityLength(const string& str) {
		int inputLength = str.size();

		if (inputLength == targetLength) return maxScore;
		if (isDiffGreaterThanTwice(inputLength)) return 0;
		return (1 - abs(inputLength - targetLength) / smaller(inputLength)) * maxScore;
	}

private:
	int smaller(int inputLength)
	{
		return (inputLength < targetLength) ? inputLength : targetLength;
	}

	bool isDiffGreaterThanTwice(int inputLength)
	{
		return inputLength >= 2 * targetLength || 2 * inputLength <= targetLength;
	}

	string target{};
	int targetLength{};
};