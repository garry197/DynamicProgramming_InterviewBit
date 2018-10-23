int Solution::anytwo(string A) {
    
    if(A.size()==1||A.size()==0)
    return 0;
    
    
    int n=A.size();
    int dp[n+1][n+1];
    
    
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            dp[i][j]=0;
        }
        
    }
    
    
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            
            if(A[i-1]==A[j-1]&&i!=j)
            dp[i][j]=1+dp[i-1][j-1];
            
            else
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            
            
        }
        
    }
    
    //return dp[n][n];
    
    if(dp[n][n]<2)
    return 0;
    else
    return 1;
    
    
    
    
}
