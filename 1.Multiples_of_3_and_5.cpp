/*
Statement:

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

*/

/*
Logic:

We need to  apply the 'Principle of Inclusion and Exclusion' to solve this problem.
Here it simply means, we find all factors of 3 and 5 separately and add them before
subtracting the lcm(3,5) or 15's factors from the total sum.

*/


#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int count_3 = 1, count_5 = 1, count_15 = 1;

    //loop to add 3s multiples
    while(3*count_3 < 1000)
    {
        sum += 3*count_3++;
    }

    //loop to add 5s multiples
    while(5*count_5 < 1000)
    {
     //   if ((5*count_5)%15 != 0)
            sum += 5*count_5++;
    }

    //Removing 15s multiples
    while(15*count_15 < 1000)
    {
        sum -= 15*count_15++;
    }
    cout<<sum<<endl;

    return 0;
}