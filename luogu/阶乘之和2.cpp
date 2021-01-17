#include <iostream>    
#include <string.h>           
using namespace std;    
int az[100],bz[100],q,k;  
int main()    
{    
cin >>q; az[0]=1;  
for (int y=1;y<=q;y++)
{
	
for (int p=1;p<=y;p++)
{
  for (int i=0;i<99;i++)    
  az[i]*=p;   
  for (int u=0;u<99;u++)
  if (az[u]>9) 
  {        
  az[u+1]+=az[u]/10;az[u]%=10;
  }
}   

for (int i=0;i<100;i++)    
{
bz[i]+=az[i]; 
if (bz[i]>9) 
{
   bz[i+1]+=bz[i]/10;bz[i]%=10;   
} 
az[i]=0;}  
  
az[0]=1;  
}  

for (int i=99;i>0;i--) 
{
 if (bz[i]==0&&k==0)
 continue;   
 k=1; 
 cout <<bz[i];
}     
cout <<bz[0];    
return 0;  
  
} 
