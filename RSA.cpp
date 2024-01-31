#include"RSA.h"
#include<iostream>
#include<cstdlib>
using namespace std;

bool isPrime(unsigned long long n)
{
    if(n % 2 == 1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
unsigned long long getPrime(unsigned long long min, unsigned long long max)
{
    unsigned long long primeNumber = 0;
    while(!isPrime)
    {
        primeNumber = rand() % max + min;
        isPrime(primeNumber);
    }
    return primeNumber;
}
unsigned long long gcd(unsigned long long x, unsigned long long y)
{
    unsigned long long gcdenom;
    while((x % y) > 0)
    {
        gcdenom = x % y;
        x = y;
        y = gcdenom;
    }
    return y;
}
unsigned long long lcm(unsigned long long x, unsigned long long y)
{
    unsigned long long lcDenom;
    
    return lcDenom = (x*y)/gcd(x,y);
}
unsigned long long modInverse(unsigned long long e, unsigned long long lam);
unsigned long long modExp(unsigned long long base,unsigned long long exp,unsigned long long n)
{
   unsigned long long ans = 1;
   for(unsigned long long i = 0; i < exp; i++)
      ans = (ans * base) % n;
   return ans;
}