class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> m;
        long long ans = 0;

        for(auto& str : words){
            string key = str;
            int shift = str[0] - 'a';

            for(int i=0; i<str.size(); i++){
                int x = (str[i] - 'a' - shift + 26) % 26;
                key[i] = char(x + 'a');
            }
            ans += m[key];
            m[key]++;
        }
        return ans;
    }
};