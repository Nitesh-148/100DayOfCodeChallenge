//Given a square matrix, calculate the absolute difference between the sums of its diagonals.

#include<iostream>
using namespace std;
int main()
{
    int n,leftsum=0,rightsum=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(i==j)
            {
                leftsum=leftsum+arr[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1-i;j>=0;)
        {
            rightsum=rightsum+arr[i][j];
            break;
        }
    }
    cout<<abs(leftsum-rightsum)<<endl;
}