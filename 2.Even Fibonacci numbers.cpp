/*
Statement:

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

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
    int prev = 2, cur = 3, sum = 0;
    int i;
    
    while(cur<4000000)
    {
        if(i == 1)
        {    
            sum += cur;
            i++;
        } 
        else if( i== 3)
            i = 1;

        cur = sum;
        prev = cur;
    }

    cout<<sum<<endl;

}