#include<bits/stdc++.h>

int main()
{
    int n;
    std::cin>>n;
    int arr[n];
    for(auto & x:arr)
    {
        std::cin>>x;
    }
   std:: vector<int> l;

   for(int i=0;i<n;i++)
   {
       int j;
       for( j=2;j<arr[i];j++)
       {
           if(arr[i]%j==0)
           {
               break;
           }
       }
       if(j==arr[i])
       {
           l.push_back(arr[i]);
       }
   }
   int sum=std::accumulate(l.begin(), l.end(), 0);
   std::vector<int> m;
   while(sum>0)
   {
       m.push_back(sum%10);
       sum/=10;
   }
   for(int i=0;i<m.size();i++)
   {
       for(int j=i+1;j<m.size();j++)
       {
           if(m[i]==m[j])
           {
               std::cout<<"no";
               return 0;
           }
       }
   }
   std::cout<<"yes;"







}