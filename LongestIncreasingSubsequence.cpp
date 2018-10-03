int Solution::lis(const vector<int> &A) {
    int s=A.size();
    if(s==0)
    return 0;
    if(s==1)
    return 1;
    int arr[s];
    arr[0]=1;
    int maxi=1;
    for(int i=1;i<s;i++)
    {
        arr[i]=1;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                arr[i]=max(arr[i],arr[j]+1);
				}
            
        }
       maxi=max(maxi,arr[i]);
    }return maxi;
    
}
