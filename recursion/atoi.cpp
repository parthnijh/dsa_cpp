class Solution {
public:

    int helper(string &s, int i, long long number) {
        
        if (i >= s.size() || !isdigit(s[i]))
            return number;

        number = number * 10 + (s[i] - '0');

       
        if (number > INT_MAX) 
            return INT_MAX;

        return helper(s, i + 1, number);
    }

    int myAtoi(string &s) {
        int i = 0, n = s.size();
        long long number = 0;
        int sign = 1;

        
        while (i < n && s[i] == ' ') i++;

      
        if (i < n && s[i] == '+') i++;
        else if (i < n && s[i] == '-') { 
            sign = -1; 
            i++;
        }

       
        number = helper(s, i, 0);

      
        long long ans = sign * number;
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;

        return ans;
    }
};
class Solution {
public:

    long long helper(string &s, int i, long long number, int sign) {
        if (i >= s.size() || !isdigit(s[i]))
            return number;

        number = number * 10 + (s[i] - '0');

        
        if (sign == 1 && number > INT_MAX) return INT_MAX;
        if (sign == -1 && -number < INT_MIN) return (long long)INT_MAX + 1; // Makes -2147483648

        return helper(s, i + 1, number, sign);
    }

    int myAtoi(string &s) {
        int n = s.size();
        int i = 0;
        int sign = 1;
        long long number = 0;

        
        while (i < n && s[i] == ' ') i++;
        if (i == n) return 0;

        
        if (s[i] == '+') { i++; }
        else if (s[i] == '-') { sign = -1; i++; }

        
        number = helper(s, i, 0, sign);

        long long ans = number * sign;

        // Final clamp
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;

        return ans;
    }
};
