#include <iostream>

using namespace std;

int main()
{
    int t;
    unsigned long long int n;
    unsigned long long int k;


     unsigned long long int counter=0;

    unsigned long long int j;
    cin>>t;
    unsigned long long int a[t],c;
    for(int i=0;i<t;i++){
        cin>>n>>k;

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
        a[i]=counter;
        counter=0;



}
  for(int l=0;l<t;l++){
    cout<<a[l]<<endl;
  }
}
