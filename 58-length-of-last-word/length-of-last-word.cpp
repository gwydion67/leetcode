class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.length() -1;
        int check = 0;

        int count = 0;
        while( end >= 0 ){
            if(s[end] == ' ' && check == 1 ){
                return count;
            }
            if(s[end] != ' '){
                check = 1;
                count++;
            }
            end--;   
        }
        return count;
    }
};