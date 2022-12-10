#include <iostream>
using namespace std;
int main()
{
    int run = 10, basket = 8, sleep = 1;
    int weight, mets, min;

   cout<<"Enter weight in pounds.\n";
   cin>>weight;
   cout<<"METS for running are 6, basketball are";
   cout<<" 8, and sleeping is 1.\n";
   cout<<"Enter number of METS for your activity.\n";
   cin>>mets;
   cout<<"Enter minutes spent in activity.\n";
   cin>>min;
   cout<<"Your calories burned:\n";
   cout<<(.0175 * mets * (weight/2.2))*min;
   return 0;
}
