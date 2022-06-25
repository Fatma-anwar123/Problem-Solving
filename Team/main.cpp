#include <iostream>

using namespace std;

int main()
{
    long long int n;
cin>>n;

int inp[n][3];

for(int i =0; i<n;i++)
{
    for(int j =0; j<3;j++)
        cin>>inp[i][j];
}
int sol=0;
int counter=0;

for(int i =0; i<n;i++)
{
    for(int j =0; j<3;j++)
    {
        if(inp[i][j]==1) counter++;

    }
    if(counter>=2) sol++;
    counter=0;

}

cout<<sol;
    return 0;
}
