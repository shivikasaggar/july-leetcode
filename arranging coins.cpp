//You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
//Given n, find the total number of full staircase rows that can be formed.
//n is a non-negative integer and fits within the range of a 32-bit signed integer.

class Solution {
public:
    int arrangeCoins(int n) {
        long long int t=1;
        long long int i=2;
        long long int count=0;
        while(t){
            if(n>t){
                t+=i;
                i++;
                count++;
            }
            else if(n==t){
                count++;
                return count;
            }
            else{
                return count;
            }
            
        }
        return 0;
    }
};
