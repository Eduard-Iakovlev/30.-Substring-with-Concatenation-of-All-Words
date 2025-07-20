#include "Solution.h"
#include <gtest/gtest.h>

class TestSolution : public ::testing::Test {
public:
    TestSolution(): ::testing::Test() {}
};

TEST_F(TestSolution, Test1) {
    {
    string str = "barfoothefoobarman";
    vector<string> words = {"foo","bar"};
    vector<int> expected = {0, 9};
    Solution s;
    EXPECT_EQ(s.findSubstring(str, words), expected);
    }
}

TEST_F(TestSolution, Test2) {
    {
    string str = "wordgoodgoodgoodbestword";
    vector<string> words = {"word","good","best","word"};
    vector<int> expected = {};
    Solution s;
    EXPECT_EQ(s.findSubstring(str, words), expected);
    }
}
TEST_F(TestSolution, Test3) {
    {
    string str = "barfoofoobarthefoobarman";
    vector<string> words = {"bar","foo","the"};
    vector<int> expected = {6,9,12};
    Solution s;
    EXPECT_EQ(s.findSubstring(str, words), expected);
    }
}

TEST_F(TestSolution, Test4) {
    {
    string str = "bcabbcaabbccacacbabccacaababcbb";
    vector<string> words = {"c","b","a","c","a","a","a","b","c"};
    vector<int> expected = {6,16,17,18,19,20};
    Solution s;
    EXPECT_EQ(s.findSubstring(str, words), expected);
    }
}