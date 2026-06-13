class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> target(26,0);
        vector<int> window(26,0);

        for(char c : p)
            target[c-'a']++;

        vector<int> ans;

        int k = p.size();

        for(int i=0;i<s.size();i++){

            window[s[i]-'a']++;

            if(i>=k)
                window[s[i-k]-'a']--;

            if(window==target)
                ans.push_back(i-k+1);
        }

        return ans;
    }
};