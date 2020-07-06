//Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
//The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
//You may assume the integer does not contain any leading zero, except the number 0 itself.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(n==1){
            if(digits[0]<9){
                digits[0]+=1;
                return digits;
            }
            else{
                digits.clear();
                digits.push_back(1);
                digits.push_back(0);
                return digits;
            }
        }
        int i=n-1;
        int carry=0;
        int sum=digits[i]+1;
        digits[i]=sum%10;
        carry=sum/10;
        i--;
        while(i>=0){
         sum=digits[i]+carry;
            digits[i]=sum%10;
            carry=sum/10;
            i--;
        }
        if(carry==0){
            return digits;
        }
        else{
            reverse(digits.begin(),digits.end());
            digits.push_back(carry);
            reverse(digits.begin(),digits.end());
            return digits;
        }
        
    }
};
