#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    int n,x,i,j,sum=0;
    cin>>n;
    vector<int>v1;
    while(n)
    {
        x=n%10;
        n=n/10;
        v1.push_back(x);
        
    }

    for (j = 1; j< v1.size()-1; j++)
    {
        sum+=v1[j];
    }
    cout<<sum;
    
    return 0;
}