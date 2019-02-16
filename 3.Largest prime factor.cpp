/*
Statement:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

/*
Logic:

Similar to manually calculating the lcm of a number, we repeatedly
factorize the given number while updating the largest primefactor in each
step.
We find the smallest prime factor of the given number repeatedly and stop
once there is no more prime factor ie. 0.

*/


#include<iostream>
#include<cmath>
using namespace std;

unsigned long long int smPrimeFactor(unsigned long long int num)
{
    unsigned long long int i = 2;

    while(i<= sqrt(num)){
        if(num%i == 0) return i;
        i++;
    }

    return 0;

}

int main()
{
    unsigned long long int num = 600851475143, lg = 0;

    while(true)
    {
        unsigned long long int pFactor = smPrimeFactor(num);

        if (pFactor == 0)
        {
            lg = num>lg? num: lg;
            break;
        } 
        else 
        {
            num = num/pFactor;
            lg = pFactor>lg? pFactor: lg;
        }
    }

    cout<<lg<<endl;

    return 0;
}