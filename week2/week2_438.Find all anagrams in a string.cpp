class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        vector<int> result;
        vector<int> needs(26, 0);
        vector<int> window(26, 0);

        if (s_len < p_len) {
            return {};
        }

        for (int i = 0; i < p_len; i++) {
            needs[p[i] - 'a']++;
        }

        for (int i = 0; i < p_len; i++) {
            window[s[i] - 'a']++;
        }

        if (needs == window) {
            result.push_back(0);
        }

        for (int left = 0, right = p_len; right < s_len; left++, right++) {
            window[s[left] - 'a']--;
            window[s[right] - 'a']++;

            if (needs == window) {
                result.push_back(left + 1);
            }
        }

        return result;
    }
};
