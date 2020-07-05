//Write a program to find the n-th ugly number.
//Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 
class Solution {
public:
    int nthUglyNumber(int n) {
        
        int v[n];
        v[0]=1;
        int i2=0,i3=0,i5=0;
        int mul2=2;
        int mul3=3;
        int mul5=5;
        int current=1;
        for(int i=1;i<n;i++){
            current=min(mul2,min(mul3,mul5));
            v[i]=current;
            if(current==mul2){
                i2=i2+1;
                mul2 = v[i2]*2; 
            }
             if(current==mul3){
                i3=i3+1;
                mul3 = v[i3]*3; 
            }
             if(current==mul5){
                i5=i5+1;
                mul5 = v[i5]*5; 
            }
        }
        return v[n-1];
        
    }
};
