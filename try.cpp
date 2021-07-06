#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
   if(n == 0) return 0;
   return n%10 + digitSum(n/10);
}
bool isUnit(int n){
   if(n>= 0 && n <= 9){
      return true;
   }else{
      return false;
   }
}
int digitalRoot(int n){
   if(isUnit(n)){
      return n;
   }else{
      int t = digitSum(n);
      if(isUnit(t)){
         return t;
      }else{
         return digitalRoot(t);
      }
   }

}
int main()
{

   cout<<digitalRoot(99999);
   return 0;
}