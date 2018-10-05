int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    
    
    int n=A[0].size();
    int m=A.size();
    
    int a[m][n];
    
    a[m-1][n-1]=min(A[m-1][n-1],0);
    
    for(int i=m-2;i>-1;i--)
    {
        a[i][n-1]=min(A[i][n-1],min(0,A[i][n-1]+a[i+1][n-1]));
    }
    
    for(int i=n-2;i>-1;i--)
    {
        a[m-1][i]=min(A[m-1][i],min(0,A[m-1][i]+a[m-1][i+1]));
    }
 

for(int i=m-2;i>-1;i--)
{
    
    for(int j=n-2;j>-1;j--)
    {
       int bestneighbor = max(a[i][j+1], a[i+1][j]);
       
       a[i][j]=min(0,min(A[i][j],A[i][j]+bestneighbor));
       
       
    }
    
    
    
}

 
 
 return abs(a[0][0])+1;
 
 
 
 
   
   
}
