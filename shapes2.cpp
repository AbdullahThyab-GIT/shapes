#include <iostream>
using namespace std;

int main(){

int rwo;
cout<<"enter rwo : ";
cin>>rwo;
/*
Q1 : 
// مربع
*****
*****
*****

*/

for (int i = 0; i < rwo; i++)
{
    for (int j = 0; j < rwo; j++)
    {
       cout<<"* ";
    }
    
 
    cout<<endl;
}
cout<<"                    \n";
cout<<"||||||||||||||||||| \n";
cout<<"                    \n";
/*
Q2 : 
     *
    * *
   * * *
  * * * *
     
*/

for (int i = 0; i < rwo; i++)
{
    for (int j = 1; j < rwo - i; j++)
    {
        cout<<" ";
    }

    

    for (int k = 0; k <= i; k++)
    {
        cout<<"* ";
    }
    cout<<endl;
    
}
cout<<"                    \n";
cout<<"||||||||||||||||||| \n";
cout<<"                    \n";
/*
Q3 : 
 
  * * * *
   * * *
    * *
     *  
*/

for (int i = 0; i < rwo; i++)
{
    
    for (int j = rwo ; j > i; j--)
    {
        cout<<"* ";
    }
    cout<<endl;
    for (int k = 0; k <= i ; k++)
    {
        cout<<" ";
    }
    
    
}
cout<<"                    \n";
cout<<"||||||||||||||||||| \n";
cout<<"                    \n";
/*
Q4 : 
     *
    * *
   * * *
  * * * *
   * * *
    * *
     *  
*/


for (int i = 0; i < rwo; i++)
{
    
    for (int j = 1 ; j < rwo - i; j++)
    {
        cout<<" ";
    }
   
    for (int k = 0; k <= i ; k++)
    {
        cout<<"* ";
    }
    
     cout<<endl;

     if (i >= (rwo - 1))
     {

        for (int b = 0; b < rwo; b++)
        {

        for (int n = 0 ; n <= b ; n++)
        {
            cout<<" ";
        }

        

        for (int p = rwo -2 ; p >= b ;p--)
        {
            cout<<"* ";
        }
        
       
        cout<<endl;
     }
     }
     
}


cout<<"                    \n";
cout<<"||||||||||||||||||| \n";
cout<<"                    \n";


// q5 : drow the :-
/*
    *
  * *
* * *
  * *
    *
*/


//first : 

for (int i = 0; i < rwo; i++)
{
    // this for loop for the rwo : 

    for (int j = rwo -1 ; j > i; j--)
    {// this for loop for space :
        cout<<" ";  
    }

    for ( int k = 0; k <= i; k++)
    { // this for loop for star "*";
        
        cout<<"*";
    }

       

    if (i == (rwo -1))
    {
        cout<<endl;
        for (int b = 0; b < rwo; b++)
        {

        for (int n = 0 ; n <= b ; n++)
        {
            cout<<" ";
        }

        

        for (int p = rwo -2 ; p >= b ;p--)
        {
            cout<<"*";
        }
        
       cout<<endl;
       
     }
        
    }
    
    
    cout<<endl;
}


cout<<"                    \n";
cout<<"||||||||||||||||||| \n";
cout<<"                    \n";

/*
q6 : 

   *
  ***
 *****
*******

*/

    
   for (int i = 1; i <= rwo; i++)
   {
    
    for (int j = 1 ; j <= rwo - i ; j++)
    {
       cout<<"/";
    }
   
   
    
    for (int k = 1; k <= (2 * i - 1); k++)
    {
       cout<<"*";
    }

    
    cout<<endl;
   
   }

   

}