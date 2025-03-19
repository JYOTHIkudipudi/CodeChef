/*   Chef Drinks Tea
Chef has planned that he will drink exactly X liters of tea daily. He has an empty jar having a capacity of Y liters.
Chef can visit the tea shop to refill the jar. In each refill, the jar is completely filled to the brim and Chef is charged Z rupees.
Chef wonders what is the minimum amount of money he has to pay for drinking exactly X liters of tea daily.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three space-separated integers X, Y, and Z denoting the amount of tea Chef has to drink daily, 
the capacity of his jar and the cost of refilling his jar.

Output Format
For each test case, output in a single line, the minimum amount Chef has to pay.

Constraints
1≤T≤1000
1≤X,Y,Z≤100    */


#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin >> t;
       while(t--){
               double TeaLiters, Ycapacity, Zrupees;
               cin >> TeaLiters >> Ycapacity >> Zrupees;
               if(TeaLiters<=Ycapacity){
                       cout << Zrupees << endl;
               }
               else if(TeaLiters>Ycapacity){
                       double cost = ceil(TeaLiters/Ycapacity);
                       cout << cost*Zrupees << endl;
               }
       }
       return 0;
}
