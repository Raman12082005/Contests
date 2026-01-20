class Solution {
public:
    int residuePrefixes(string str) {
        // base cases
        if(str.size() == 1) return 1;

        int ans = 0;
        vector<int> hash(26, 0);
        int distinct = 0;
        for(int i=0; i<str.size(); i++){
            if(hash[str[i] - 'a'] == 0) distinct++;

            hash[str[i] - 'a']++;
            
            int lenprefix = (i+1)%3;

            if(distinct == lenprefix) ans++;
            if(distinct >= 3) break;
        }
        return ans;
    }
};