int Solution::maxProduct(const vector<int> &A) {
    
    if(A.size()==1)
    return A[0];
    
    
    int n=A.size();
    
    int maxval=A[0];
    int minval=A[0];
    
   
    int sol=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]<0)
        {
            swap(maxval,minval);
        }
        maxval=max(A[i],maxval*A[i]);
        minval=min(A[i],minval*A[i]);
        sol=max(maxval,sol);
    }
    
    return sol;
    
}
