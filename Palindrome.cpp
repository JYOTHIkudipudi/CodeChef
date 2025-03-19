#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int n){
        int reverse = 0;
        int temp = abs(n);
        while(temp!=0){
                reverse = (reverse*10)+temp%10;
                temp /= 10;
        }
        return(reverse==abs(n));
}
int main() {
	// your code goes here
          int n;
          cin >> n;
          if(ispalindrome(n)==1){
                  cout << "Yes" << endl;
          } 
          else{
                  cout << "No" << endl;
          }
          return 0;
}
