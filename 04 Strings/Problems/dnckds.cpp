class Solution {
public:
    int compress(vector<char>& chars) {
        //string compressions leetcode
        int i = 0, j = 0;           //i: start index, j: end index
        while (i < chars.size()) {  
            int count = 1;      //count: the number of chars in the same position
            while (i + 1 < chars.size() && chars[i] == chars[i + 1]) {      //compress the same chars
                count++;                                   
                i++;                    
            }
            chars[j++] = chars[i];  //copy the chars to the new string
            if (count > 1) {    //if the chars are compressed, copy the count to the new string
                for (int k = 0; k < count; k++) {   //copy the count to the new string
                    chars[j++] = count + '0';   //add the count to the new string
                }       
            }
            i++;        //move to the next char
        }
        return j;   //return the new string's length
    }
};
    