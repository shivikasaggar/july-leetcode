//Reverse bits of a given 32 bits unsigned integer.
//Example 1:
//Input: 00000010100101000001111010011100
//Output: 00111001011110000010100101000000
//Explanation: The input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, 
//so return 964176192 which its binary representation is 00111001011110000010100101000000.



class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t m = 0;
    for (int i = 0; i < 32; i++, n >>= 1) {
        m <<= 1;
        cout<<m<<"    ";
        m |= n & 1;
         cout<<m<<endl;
    }
    return m;
        
    }
};
