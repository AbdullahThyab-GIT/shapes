#include <iostream>
using namespace std;

int main()
{
int row;
cout<<"Enter the number of row : ";
cin>>row;
/* Q1 : 

*
**
***
****

*/ 

for (int i = 0; i < row; i++)
{
    for (int j = 0; j <= i; j++)
    {
        cout<<"*  ";
    }

    cout<<endl;
    
}

cout<<"|||||||||||||||| \n";
/* Q2 : 

   *
  **   
 ***
****

*/ 



for (int i = 0 ; i < row; i++)
{
   
    for (int h = 0; h <= row - i ; h++)
    {
        cout<<" ";
   
    }
    
    for (int j = 0; j <= i; j++)
    {
       cout<<"*";
    }
    
    cout<<endl;
}

cout<<"|||||||||||||||| \n";

cout<<"|||||||||||||||| \n";
/* Q3 : 

****
***
**
*

*/ 

for (int i = 0; i < row; i++)
{
    for (int j = row; j > i; j--)
    {
        cout<<"*  ";
    }

    cout<<endl;
    
}


cout<<"|||||||||||||||| \n";
/* Q4 : 

****
 ***
  ** 
   * 
*/ 



for (int i = 0 ; i < row; i++)
{
   
    for (int j = row ; j > i ; j--)
    {
        cout<<"*";
    }
    
    cout<<endl;

    for (int k = 0; k < i + 1 ; k++)
    {
        cout<<" ";
    }
}
cout<<"                  \n ";
cout<<"|||||||||||||||| \n";
/* Q5 : 
//الصف الاول زوجي .....
1
00
111
0000
11111 
*/ 

for (int i = 0; i < row ; i++)
{
    
    for (int j = 0; j <= i ; j++)
    {
        if (i % 2 == 0)
        cout<<"1";
        else{
        cout<<"0";    
        }
    }
    
    cout<<endl;
}

cout<<"|||||||||||||||| \n";
/* Q6 : 
//الصف الاول زوجي .....
1
10
101
1010
10101 
*/

for (int i = 0; i < row; i++)
{
    
    for (int j = 0; j <= i; j++)
    {
        if (j % 2 == 0)
        {
        cout<<"1";
        }
        else{
          cout<<"0";  
        }
        
    }

    cout<<endl;
    
}


}