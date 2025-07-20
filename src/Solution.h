#include <vector>
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
    public:
    vector<int> findSubstring(string s, vector<string>& words);
    private:
    unordered_map<string, unsigned int> map;

};