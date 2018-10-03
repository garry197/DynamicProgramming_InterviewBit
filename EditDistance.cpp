int helper(string a,string b,int size1,int size2)
{
    int dp[size1+1][size2+1];
   
    
    for(int i=0;i<size1+1;i++)
    dp[i][0]=i;
      for(int i=0;i<size2+1;i++)
    dp[0][i]=i;
    
    for(int i=1;i<size1+1;i++)
    {
        for(int j=1;j<size2+1;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            
            else 
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
            
            
        } 
        
    }
    
    return dp[size1][size2];
    
    
    
}


int Solution::minDistance(string A, string B) {
    int size1=A.size();
    int size2=B.size();
    
    return helper(A,B,size1,size2);
    
    
}
