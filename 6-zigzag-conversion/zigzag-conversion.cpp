class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        std::string ans; // The final answer string in zigzag order.
        int cycleLength = 2 * numRows - 2; // The length of the repeating zigzag cycle.

        for (int currentRow = 1; currentRow <= numRows; ++currentRow) {
            int interval = (currentRow == numRows)
                               ? cycleLength: 2 * numRows - 2 * currentRow;
            int currentIndex = currentRow - 1; 

            while (currentIndex < s.length()) {
                ans.push_back(
                    s[currentIndex]); // Append character to the answer string.
                currentIndex += interval; // Move to the next character in the
                                          // zigzag pattern.
                interval =
                    cycleLength -
                    interval; // Alternate the interval for the zigzag pattern.

                if (interval == 0) {
                    interval = cycleLength;
                }
            }
        }

        return ans;
    }
};