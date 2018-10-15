int Solution::longestSubsequenceLength(const vector<int> &A) {
    
    
    
    
    int s=A.size();
    if(s==0)
    return 0;
    if(s==1)
    return 1;
    int a[s];
    int b[s];
    
    for(int i=0;i<s;i++)
    {
       a[i]=1;b[i]=1;
            
        }
        
      for(int i=1;i<s;i++)
      {
          for(int j=0;j<i;j++)
          {
              if(A[i]>A[j]&&a[i]<a[j]+1)
              {
                  a[i]=a[j]+1;
              }
          }
      }
        
       
        
      for(int i=s-2;i>-1;i--)
      {
          for(int j=s-1;j>i;j--)
          {
              if(A[i]>A[j]&&b[i]<b[j]+1)
              {
                  b[i]=b[j]+1;
              }
          }
      }  
        int max=a[0]+b[0]-1;
        
       
       
     /*  for(int i=0;i<s;i++)
      {
          cout<<a[i]<<b[i]<<endl;
      }*/
       
        
        for(int i=1;i<s;i++)
      {
          if((a[i]+b[i]-1)>max)
          {
              max=a[i]+b[i]-1;
          }
      }
        
        
       return max; 
        
        
        
        
    }
