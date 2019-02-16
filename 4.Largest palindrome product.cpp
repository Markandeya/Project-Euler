/*
Statement:

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

/*
Logic:

Palindrome is found by comparing reverse of number and the number's equality.
All three digit numbers are multiplied with each other except for 10s multiples
since it produces zero(es) at unit place.

*/


#include<iostream>
using namespace std;

bool isPalindrome(unsigned int num)
{
    unsigned int rev = 0, tmp = num;

    while(tmp>0)
    {
        int rem = tmp%10;

        rev = rev*10+rem;

        tmp /= 10; 
    }

    if(num == rev)
        return true;
    return false;
}


int main()
{
    int lg = 0;

    for (int i = 100; i <= 999; ++i)
    {

        //No:s ending in 0 doesn't give palindrome
        if (i%10 == 0) continue;
        
        for (int j = 100; j <= 999; ++j)
        {
            if (j%10 == 0) continue;

            int num = i*j;
            
            if (isPalindrome(num))
                lg = num>lg? num: lg;
        }
    }

    cout<<lg<<endl;

    return 0;
}