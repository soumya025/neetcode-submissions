class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxl = 0;
        for(int i=0;i<s.size();i++){


        
       int mp[255] = {0};
       

       for (int j =i; j<s.size();j++){
        if(mp[s[j]]==1) break;
        maxl = max(maxl,j-i+1);
        mp[s[j]]=1;

       }
    }
    return maxl;

       
    }
};
