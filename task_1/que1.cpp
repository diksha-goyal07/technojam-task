class Solution {
public:
    int xorOperation(int n, int start) {
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=start+2+i;
        }
        int bin=arr[0];
        for(int i=0;i<n-1;i++)
        {
            bin=bin^arr[i+1];
        }
        return bin;
    }
};