long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int ws=0,we=0;
        long ans=0,s=0;
        while(we<Arr.size())
        {
            s+=Arr[we];
            if((we-ws+1)==K)
            {
                ans=max(ans,s);
                s-=Arr[ws];
                ws++;
            }
            we++;
        }
        return ans;
    }
