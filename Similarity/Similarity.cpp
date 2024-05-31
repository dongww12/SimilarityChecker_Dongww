#include <iostream>
#include <string>

using namespace std;

class Similarity {
public:
	Similarity(const string& str)
		: target(str) {}
	int similarityLength(const string& str) {
		int inputLength = str.size();
		int targetLength = target.size();
		if (inputLength == targetLength) return 60;
		if (inputLength >= 2 * targetLength
			|| 2 * inputLength <= targetLength) return 0;
		int smaller = (inputLength < targetLength) ?
			inputLength : targetLength;
		return (1 - abs(inputLength - targetLength) / smaller) * 60;
	}
private:
	string target{};
};