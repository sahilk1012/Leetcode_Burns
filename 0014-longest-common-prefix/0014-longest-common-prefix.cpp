// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& s) {
//         string ans="";
//         for(int i =0;i<s[00].size();i++){
//             for(int j=0;j<s.size()-1;j++){
//                 if(s[j][i]!= s[j+1][i]) return ans;
//             }
//             ans+=s[0][i];
//         }
//         return ans;
//     }
// };
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string prefix = "";
        
        for (int i = 0; i < strs[0].size(); i++) {        // Outer loop over chars
            char ch = strs[0][i];                         // Candidate character
            for (int j = 1; j < strs.size(); j++) {       // Compare with ALL other strings
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return prefix;
                }
            }
            prefix += ch;
        }
        return prefix;
    }
};
