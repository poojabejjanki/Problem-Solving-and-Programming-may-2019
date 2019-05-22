#include <iostream>
#include <string>

using namespace std;
int main()
{
   ?? i;
   ?? j;
   ?? temp;
   ??[] a = new ??[??+1];

   a[1] = 3;
   a[2] = 2;
   a[3] = 1;
   i =1;
   j =i+1;
   if (a(i)>a(j))
   {
      i =i+1;
      temp =a(i);
      a[i] = a(j);
      a[j] = temp;
   }
   else
   {
   }
   cout << a(3) << endl;
   return 0;
}
