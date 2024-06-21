class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int temp = abs(x);
        long long int rev_x = 0;

        while (temp > 0) {
            rev_x = rev_x * 10 + (temp % 10);
            temp /= 10;
        }
        cout << rev_x;

        return (rev_x == x);
    }
};