// Last updated: 7/1/2026, 11:42:01 AM
class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
        }
        long num=labs(n);

        double pow=1;

        while(num!=0){

            if(num & 1){
                pow*=x;
            }

            x*=x;

            num>>=1;
        }
        return pow;
    }
};