class Solution {
public:
    std::string reverseWords(std::string s) {
        int i = s.length() - 1;
        int j;
        std::string ans;

        if (s.length() == 0) {
            return ""; 
        }

        while (i >= 0) {

            if (s[i] != ' ') { 
                j = i;

                while (j >= 0 && s[j] != ' ') {
                    j--;
                }
                std::string word = s.substr(j + 1, i - j);

          
                if (!ans.empty()) {
                    ans += ' ';
                }

                ans += word;

                
                i = j;

            } else { 

                i--;
            }
        }
        return ans;
    }
};
