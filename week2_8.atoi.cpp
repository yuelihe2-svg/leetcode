class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long long ans = 0;
        int sign = 1;     
        int n = s.size(); 

        while (isspace(s[i])) {
            i++;
        }
        if (i<n&&s[i] == '-') {
            sign = -1;
            i++;
        } else if (i<n&&s[i] == '+') {
            sign = 1;
            i++;
        }
      
        for (; i <n; i++) {
            int digit=s[i]-'0';
            
            if (isdigit(s[i])) {
                if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {

                    return (sign == 1) ? INT_MAX : INT_MIN;
                }
                ans = ans * 10 + (s[i] - '0');
            }
            else{
                break;
            }
        }
    
        return (int)(ans * sign);

    }
};
