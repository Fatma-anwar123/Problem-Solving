#include <iostream>

using namespace std;
#include <string>

int main()
{
    int numlines=0;
    cin>>numlines;
    string word;
    string arr[numlines];
    for(int i=0; i<numlines; i++)
    {
        cin>>word;
        arr[i]=word;

    }


    for(int i=0; i<numlines; i++)
    {
        if(arr[i].length()>10)
        {
            int  wordlen=arr[i].length()-2;
            arr[i]=arr[i][0]+to_string(wordlen)+arr[i][arr[i].length()-1];
            cout<<arr[i]<<endl;

        }
        else
        {
            arr[i]=arr[i];
            cout<<arr[i]<<endl;
        }
    }


    return 0;
}
