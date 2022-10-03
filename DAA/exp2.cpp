#include <iostream>
using namespace std;
int power(int x, int y) {
int p;
if(x==0 && y==0) {
return -1;
}
if(x==0) {
return 0;
}
if(y==0) {
return 1;
}
if(y%2 == 0) {
p = power(x, y/2) * power(x, y/2);
}
if(y%2 != 0) {
p = power(x, y-1) * x;
}
return p;
}
