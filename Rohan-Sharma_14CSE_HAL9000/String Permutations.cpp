/*
Name: Rohan Sharma
Roll no.: 14BTCSERS046
Stream: CSE
Language: C++
Compiler: GNU GCC
IDE: Code Blocks
OS: Windows 10 Pro
*/

#include <iostream>
#include <string.h>
#include "Lib/bigint.h" //library for dealing with very large numbers
#define max 500

using namespace std;

int main()
{
    BigInt total=1,final,count_factorial;
    int i,count;
    char str[200],c;
    cout<<"Enter String: ";
    cin>>str;
    for(i=0;i<strlen(str);i++)
        str[i]=toupper(str[i]);
    for(i=strlen(str);i>=2;i--) //total=factorial of strlen(str)
        total*=i;
    final=total;
    for(c='A';c<='Z';c++)   //loop to divide 'total' by factorial of number of repeated alphabets
    {
        count=0;
        count_factorial=1;
        for(i=0;i<strlen(str);i++)
            if(str[i]==c)
                count++;
        for(i=count;i>=2;i--)
            count_factorial*=i;
        final/=count_factorial;
    }
    cout<<"Number of permutations of '"<<str<<"' is: "<<final;
    return 0;
}
