#include<iostream>
using namespace std;
main()
{
    int row,col,j;
    cout<<"Enter the number of rows:- "<<endl;
    cin>>row;
    cout<<"Enter the number of columns:- "<<endl;
    cin>>col;

        for(int i=1;i<=row;i++){

            for(j=1; j<=col; j++){

                if(i==1 || i==row || j==1 || j==col){
                    cout<<"*";
                }
                 else{
                    cout<<" ";
                }
              }
           }
            cout<<endl;
return 0;
}