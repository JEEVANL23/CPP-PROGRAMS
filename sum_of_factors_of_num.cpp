#include<iostream>
using namespace std;

int main(){

        int n,i,sum=0;
        cout<<"enter n"<<endl;
        cin>>n;
        for ( i = 1; i <= n; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                sum+=i;


            }
            
        }
        cout<<sum<<endl;
          





    return 0;
}