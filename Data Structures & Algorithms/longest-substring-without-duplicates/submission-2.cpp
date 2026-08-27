class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mp[256];
        for(int i=0;i<256;i++){
            mp[i]=-1;
        }
        int n = s.size();
        int l=0,r=0,maxlen=0;

        while(r<n){
            if(mp[s[r]] != -1){
                if(mp[s[r]] >= l){
                    l = mp[s[r]] + 1;
                }
            }
                maxlen = max(maxlen,r-l+1);
                mp[s[r]]  = r;
                r++;
            }
        



    return maxlen;

       
    }
};
