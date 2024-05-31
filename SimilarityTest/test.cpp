#include "pch.h"
#include "../Similarity/Similarity.cpp"

TEST(SimilarityTestSuite, Length) {
	Similarity similar{ "ABC" };

	int actual = similar.similarityLength("DEF");
	EXPECT_EQ(actual, 60);
	actual = similar.similarityLength("DEFXYZ");
	EXPECT_EQ(actual, 0);
	actual = similar.similarityLength("DEFX");
	int expected = (1 - 1 / 3) * 60;
	EXPECT_EQ(actual, expected);
}