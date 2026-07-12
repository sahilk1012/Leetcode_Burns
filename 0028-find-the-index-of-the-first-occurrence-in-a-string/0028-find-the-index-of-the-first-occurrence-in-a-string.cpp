class Solution {
public:
    int strStr(string haystack, string needle) {
       
        vector<int>index;
        for(int i =0;i<haystack.size();i++){
            if(needle[0]==haystack[i]) {
                index.push_back(i);
            }
        }
        
       
        for(int j=0;j<index.size();j++){
             int itr=index[j];
             int count=0;
            for(int i=0;i<needle.size();i++){
                 if (itr < haystack.size() && needle[i] == haystack[itr]) {
                    count++;
                    itr++;
                } else {
                    break; 
                }
            }
            if(count==needle.size()) {
                return index[j];
                break;
            }
            
            
        }
    return -1;
    }
};