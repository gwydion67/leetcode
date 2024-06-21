class Solution {
public:
    int reverse(int x) {

        int temp = abs(x);
        long long int rev_x = 0;

        while (temp > 0) {
            rev_x = rev_x * 10 + (temp % 10);
            temp /= 10;
        }
        if(rev_x > INT_MAX ){return 0;}
        cout << rev_x;
        return x>0? rev_x : -1*rev_x;
    }
};