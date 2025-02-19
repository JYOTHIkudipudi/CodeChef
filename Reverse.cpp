#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	 cin >> n;
	 int reversee = 0;
	 while(n>0){
	         int lastdigit = n%10;
	         reversee  =reversee *10 + lastdigit;
	         n = n/10;
	 }
	 cout << reversee  << endl;
	return 0;
}
