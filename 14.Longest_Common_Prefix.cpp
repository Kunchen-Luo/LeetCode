#include <string>
#include <vector>
#include <algorithm>
class Solution_Of_Transverse_Scan{
public:
    std::string longestCommonPrefix(std::vector<std::string> strs) {
        if(!strs.size())
            return "";
        std::string prefix = strs[0];
        int length = strs.size();
        for(int i = 1; i < length; ++i) {
            prefix = longestCommonPrefix(prefix, strs[i]);
            if(!prefix.size())
                break;
        }
        return prefix;
    }
    std::string longestCommonPrefix(const std::string& str1, const std::string& str2) {
        int count = std::min(str1.size(), str2.size());
        int index = 0;
        while(index < count && str1[index] == str2[index]) {
            ++index;
        }
        return str1.substr(0, index);
    }
};