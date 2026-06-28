// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int>step(n+1);
//         int count;
//         for(int i=1;i<=n;i++){
//             if(i<=2){
//             if(i==1) step[i]=1;
//             else if(i==2) step[i]=2;
//             }
//             else {
//                 step[i]=step[i-1]+step[i-2];
//             }
//             count=step[i];
//         }
//         return count;
//     }
// };

// more otimised code
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;  

        int prev1 = 2; 
        int prev2 = 1;
        int curr;

        for (int i = 3; i <= n; i++) {
            curr = prev1 + prev2; 
            prev2 = prev1;        
            prev1 = curr;
        }
        return prev1; 
    }
};

