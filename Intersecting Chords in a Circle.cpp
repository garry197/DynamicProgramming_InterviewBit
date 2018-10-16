int Solution::chordCnt(int A) {
    int n=2*A;
    
    long long int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=0;
    }
    
    if(A==0)
    return 0;
    
    arr[0]=1;
    arr[2]=1;
    
    
    for (int i=4;i<n+1;i+=2){ 
        for (int j=0;j<i-1;j=j+2)
        {
            arr[i]=arr[i]+((arr[j]%1000000007)*(arr[i-j-2]%1000000007));
            arr[i]=arr[i]%1000000007;
        }
    }
    return arr[n]%1000000007;
    
    
}
