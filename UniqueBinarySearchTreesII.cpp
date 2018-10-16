int Solution::numTrees(int A) {
    if(A==0)
    return 0;
    
    
    int arr[A+1];
    for(int i=0;i<A+1;i++)
        {
            
            
            arr[i]=0;
            
            
        }
        
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<A+1;i++)
    {
        for(int j=1;j<i+1;j++)
        {
           arr[i]=arr[i]+arr[j-1]*arr[i-j] ;
            
            
            
            
        }
    }
    
    return arr[A];
}
