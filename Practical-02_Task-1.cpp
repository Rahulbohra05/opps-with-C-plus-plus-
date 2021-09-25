#include<iostream>
using namespace std;

int main()
{
  int number,divisor;
  bool isprime = true;
  cout << "Enter the no. to check for prime or not  ";
  cin >> number;
  if(number < 1 )
    cout << "no. needs to be greater than 1";
  else if(number == 1)
    cout << " 1 is not prime ";
  else{
    for(divisor = 2 ; divisor <= (number/2); divisor++){
       if((number % divisor) == 0) {
          isprime = false;
          break;
       }
    }
    if( isprime )
       cout << number << " is a prime number";
    else
       cout << number << " is not a prime number";
  }
  return 0;
}
