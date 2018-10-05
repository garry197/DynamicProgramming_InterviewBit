int Solution::minPathSum(vector<vector<int> > &A) {
    int col=A[0].size();
    int row=A.size();
    
    int a[row][col];
    a[0][0]=A[0][0];
    
    for(int i=1;i<col;i++)
    {
        a[0][i]=a[0][i-1]+A[0][i];
        
    }
    
     for(int i=1;i<row;i++)
    {
        a[i][0]=a[i-1][0]+A[i][0];
        
    }
    
    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            a[i][j]=A[i][j]+min(a[i][j-1],a[i-1][j]);
            
            
            
        }
    }
    
    
    return a[row-1][col-1];
    
    
    
    
    
    
    
    
    
    
}
