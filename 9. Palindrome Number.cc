class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x%10==0 && x!=0){
            return false;
        }
        long long reverseNum=0;
        long long originalNum=x;
        while(x>0){
            reverseNum= reverseNum*10 + x%10;
            x/=10;
        }
        return originalNum == reverseNum;
    }
};
