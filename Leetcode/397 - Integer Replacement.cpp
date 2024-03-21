class Solution {
public:
    int integerReplacement(long long n) {
        if(n==1) return 0;
        else if(n%2==0) return integerReplacement(n/2) + 1;
        else {
            // if(n >= INT_MAX) return integerReplacement(n-1) + 1; (X)
            // 틀린이유 : INT_MAX일때 integerReplacement(n+1) -> minimum solution
            return min(integerReplacement(n+1), integerReplacement(n-1)) + 1;
        }
    }
};