/* Regular Cleaning
Chef will do a deep cleaning of his house every 10 days - meaning on days numbered 

10,20,30,…

Today is day number N.
How many more days are there until the next day strictly after today that Chef will deep clean?

Input Format
The only line of input will contain one integer N, representing the current day number.
Output Format
Output a single integer: the number of days till the next deep cleaning.

Constraints

1≤N≤100 */


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int r = n%10;
  int ans = (r==0)? 10 : (10-r) ;
  cout << ans  << endl;
return 0;
}
