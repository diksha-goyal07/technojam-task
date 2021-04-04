#include<bits/stdc++.h>
int main()
{
  int n;
  std::cin>>n;
  char side[n];
  for(auto &x:side)
  {
    std::cin>>x;
  }
  int counter=n*4;
    for(int i=0; i<n; i++) {
       
        if(side[i]=='0')
        counter++;
        else if(side[i]=='1')
        counter--;
    }
    
    if(counter%4==0)
    std::cout<<"Tywin";
    else if(counter%4==1)
    std::cout<<"The Hound";
    else if(counter%4==2)
    std::cout<<"Jaime";
    else
    std::cout<<"The Mountain";
   
    return 0;
}