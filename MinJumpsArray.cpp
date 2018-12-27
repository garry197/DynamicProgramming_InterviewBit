


int Solution::jump(vector<int> &A) {
    int a=A.size();
    
    if(A[0]==0&&a==1)
    return 0;
    
    if(a==0)
    return -1;
    
    int * arr=new int[a];
    arr[0]=0;
    
    
    
    int mpos=A[0];
    int cpos=A[0];
    int ans=1;
    for(int i=1;i<mpos+1;i++)
    {
        
        
        if(i==a-1)
        return ans;
        
        cpos=max(cpos,i+A[i]);
        
        if(i==mpos)
        {
            
            if(cpos==mpos)
            return -1;
            mpos=cpos;
            ans++;
            
        }
        
        
    
        
    }
    
    
   
    return -1;
   
    
}
