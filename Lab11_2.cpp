//Умова задачі: Створити додаток з допомогою якого можна ввести координати точки (x, y) і визначити, чи попадає введена точка в заштриховану область на малюнку, що поданий. 
//Влучення на границю області вважати влученням в область.

#include <iostream>

using namespace std;

int main()
{
   float x =0;
   float y =0;
   float R1 = 0.5;

   cout << "Введіть значення x: " << endl;
   cin >> x;
   cout << "Введіть значення y: " << endl;
   cin >> y;  

   if(x<=0&x>=-1&y>0&y<=1)
   {
      cout << "Значення x = " << x << " та y = " << y << " попадають у заштриховану область!" << endl;
   }
   else
   {
      cout << "Значення x = " << x << " та y = " << y << " НЕ попадають у заштриховану область!" << endl;
   }


}