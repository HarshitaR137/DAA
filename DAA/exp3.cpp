#include <bits/stdc++.h>
using namespace std;
int frequency(int arr[], int size) {
 bool check[size];
 for(int i=0;i<size;i++) {
 check[i] = 0;
 }
 for(int i=0; i<size; i++) {
 if(check[i]== 1) {
 continue;
 }
 int count = 1;
 for(int j = i+1; j<size; j++) {
 if (arr[i] == arr[j]) {
 check[j] = 1;
 count++;
 }
 }
 cout<<"Frequency of "<<arr[i]<<" is: " << count << endl;
 }
}
int main() {
 int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
 int size = sizeof(arr) / sizeof(arr[0]);
 frequency(arr, size);
 return 0;
}
