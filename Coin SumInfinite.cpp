
int Solution::coinchange2(vector<int> &A, int B) {
    
    
int dp[B+1];
memset(dp, 0, sizeof(dp));
dp[0]=1;

for(int i=0;i<A.size();i++)
{
    for(int j=A[i];j<B+1;j++)
    {
        
        dp[j]=dp[j]+dp[j-A[i]];
        dp[j]=dp[j]%1000007;
        
    }
}
    
return dp[B];
    
}
