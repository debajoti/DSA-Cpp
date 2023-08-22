#include<bits/stdc++.h>
using namespace std;

void printsquare(int n){
    /*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}
void printtriangle(int n){
/*  *
    * *
    * * *
    * * * *
    * * * * *    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printtrianglereverse(int n){       
    /*
    
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */         
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printCharreverse(int n){       
    /*
    ABCDE
    ABCD
    ABC
    AB
    A
    */         
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (char)(65+j);
        }
        cout << endl;
    }
}
void printtriangleMerge(int n){       
    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *
    */    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }           
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printtriangleDoubleMerge(int n){       
    /*
        *                 *
        * *             * *
        * * *         * * *
        * * * *     * * * *
        * * * * * * * * * *
        * * * *     * * * *
        * * *         * * *
        * *             * *
        *                 *
    */    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        for (int j = 2*(n-i-1); j > 0; j--)
        {
            cout << "  ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }           
    for (int i = n-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < 2*(n-i); j++)
        {
            cout << "  ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printtriangle2(int n){
    /*  1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5 */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }   
}
void printChar2(int n){
    /*  A
        BB
        CCC
        DDDD
        EEEEE */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << (char)(i+65);
        }
        cout << endl;
    }   
}
void printtriangle3(int n){
     /* 1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5 */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1 << " ";
        }
        cout << endl;
    }   
}
void printchar17(int n){
     /*     A
           ABA
          ABCBA
         ABCDCBA
        ABCDEDCBA */
    for (int i = 0; i < n; i++)
    {
        for (int j = n - (i + 1); j > 0; j--)
        {
            cout << " ";
        }
        
        for (int j = 0; j < i+1; j++)
        {
            cout << (char)(j + 65);
        }
        for (int j = 0; j < i; j++){
            cout << (char)(64 + i - j);
        }

        cout << endl;
    }   
}
void printChar(int n){
     /* A
        AB
        ABC
        ABCD
        ABCDE */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << (char)(65+j);
        }
        cout << endl;
    }   
}
void printChar3(int n){
     /* E
        E D
        E D C
        E D C B
        E D C B A */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << (char)(64+n-j) << " ";
        }
        cout << endl;
    }   
}
void printNumber(int n){
     /* 1
        2 3
        4 5 6
        7 8 9 10 
        11 12 13 14 15 */
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            k++;
            cout << k << " ";
        }
        cout << endl;
    }   
}
void printtrianglereverseNum(int n){       
    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    */            
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void printtriangle7(int n){       
    /*
       *
      ***
     *****
    *******
   *********
    */            
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2*(n-i) + 1); j++){
            cout << "*";
        }
        cout << endl;
    }
}
void printtriangle8(int n){       
    /*
       *********
        *******
         *****
          ***
           *
    */            
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < (n - i) ; j++){
            cout << " ";
        }
        for (int j = 0; j < (2*i) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printDiamond(int n){       
    /*
           *
          ***
         *****
        *******
       *********
       *********
        *******
         *****
          ***
           *
    */
for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < ((n-i) + 1); j++){
            cout << "* ";
        }
        cout << endl;
    }            
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < (n - i) ; j++){
            cout << " ";
        }
        for (int j = 0; j < (i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printpatt11(int n){
      /*1
        01
        101
        0101
        10101
        010101*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << ((i+1) - j)%2 << " ";
        }
        cout << endl;
        
    } 
}
void printpatt12(int n){
    /*
    1                 1
    1 2             2 1
    1 2 3         3 2 1
    1 2 3 4     4 3 2 1
    1 2 3 4 5 5 4 3 2 1
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << j+1 << " ";
        }
        for (int j = 2*(n-i-1); j > 0; j--){
            cout << "  ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout << ((i+1) - j) << " ";
        }
        cout << endl;
        
    } 
}
void printpatt19(int n){
    /*
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 0; j--)
        {
            cout << "*" ;
        }
        for (int j = 0; j < (2*i); j++)
        {
            cout << " ";
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        for (int j = n-i+1; j > 0; j--)
        {
            cout << "*" ;
        }
        for (int j = 0; j < 2*(i-1); j++)
        {
            cout << " ";
        }
        for (int j = n-i+1; j > 0; j--)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    
}
void printpatt21(int n){
    /*
        *****
        *   *
        *   *
        *   *
        *****
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || i== n-1 || j == n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
}
void printpatt22(int n){
    /*
        5 5 5 5 5 5 5 5 5
        5 4 4 4 4 4 4 4 5
        5 4 3 3 3 3 3 4 5
        5 4 3 2 2 2 3 4 5
        5 4 3 2 1 2 3 4 5
        5 4 3 2 2 2 3 4 5
        5 4 3 3 3 3 3 4 5
        5 4 4 4 4 4 4 4 5
        5 5 5 5 5 5 5 5 5
    */

    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i; //distance from the top
            int left = j; //distance from the left
            int bottom = (2*n - 2) - i;
            int right = (2*n - 2) - j;

            cout << (n - min(min(top,bottom),min(left,right))) << " ";
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        // printsquare(n);
        // printtriangle(n);
        // printtriangle1(n);
        // printtriangle2(n);
        // printtrianglereverse(n);
        // printtriangle7(n);
        // printtriangle8(n);
        // printDiamond(n);
        // printtriangleMerge(n);
        // printtriangleDoubleMerge(n);
        // printpatt11(n);
        // printpatt12(n);
        // printChar(n);
        // printChar2(n);
        // printChar3(n);
        // printchar17(n); 
        // printpatt19(n); 
        // printCharreverse(n);
        // printpatt21(n);
        printpatt22(n);
    }
    
    return 0;
}