int Solution::numDistinct(string A, string B) {
if(A.size()==0)
return 0;


if(B.size()==0)
return 1;



int n=A.size();
int m=B.size();
if(m>n)
return 0;
n++;
m++;
int dp[m][n];

for(int i=1;i<m;i++)
{
    dp[i][0]=0;
}
for(int i=0;i<n;i++)
{
    dp[0][i]=1;
}
    
for(int i=1;i<m;i++)
{
    for(int j=1;j<n;j++)
    {
        if(B[i-1]!=A[j-1])
        {
            dp[i][j]=dp[i][j-1];
        }
        else
        dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
    }    
}    
    
    
/*    for(int i=1;i<m;i++)
{
    for(int j=1;j<n;j++)
    {
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
    
    int ans=1;
    for(int i=1;i<m;i++)
    {
        ans=ans*dp[i][n];
    }
    */
    return dp[m-1][n-1];
    
    
    
}
