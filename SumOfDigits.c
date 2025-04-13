/*  Sum of Digits
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input Format
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, calculate the sum of digits of N, and display it in a new line.   */

#include <stdio.h>
void SumOfDigits(int n){
        int sum =0;
        while(n>0){
              sum += n%10;
              n/=10;
        }
        printf("%d\n",sum);
}
int main() {
	int t;
        scanf("%d",&t);
        while(t--){
        int N;
        scanf("%d",&N);
        SumOfDigits(N);
        }
        return 0;
}

