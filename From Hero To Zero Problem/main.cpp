#include <iostream>

using namespace std;

int main()
{
    int t;
    unsigned long long int n;
    unsigned long long int k;
    int counter=0;

    unsigned long long int j;
    cin>>t;
    int c;
    for(int i=0;i<t;i++){
        cin>>n>>k;
       // cout<< n;
         j=n;
        while(j>0){
            c= j%k;
            if(c==0){

                j/=k;
                counter++;
            }
            else{
                j-=c;
                counter+=c;

            }




        }
        cout<<counter<<endl;
        counter=0;


}}
