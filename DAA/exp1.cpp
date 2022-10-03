#include <iostream>
using namespace std;
int GCD(int a, int b)
{
 if (a == 0)
 {
 return b;
 }
 if (b == 0)
 {
 return a;
 }
 int temp;
 if (a > b)
 {
 temp = a;
 a = b;
 b = temp;
 }
 b = b % a;
 if (b != 0)
 {
 a = GCD(b, a);
 }
 return a;
}
int main()
{
int gcd = GCD(1220, 516);
 cout << "\nGCD is: "<<gcd;
}







