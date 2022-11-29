//Програму організувати таким чином, щоб користувач міг задавати номер задачі, яку хоче запустити на виконання 
//1. Дано натуральне число n, яке набуває значення шкільних оцінок. Визначити відповідною кількістю звукових сигналів, яка саме оцінка була задана 
//(«1» − один звуковий сигнал, «2» − два звукових сигнала і т.д.). Якщо ж задане число не відповідає значенню шкільної оцінки, − подати один довгий звуковий сигнал. 
//2. Капосний папуга навчився висмикувати у дідуся Василя волосся, яке ще залишилося у того на голові. Почавши з однієї волосини, він щодня збільшував порцію вдвічі. 
//Через скільки днів дідусеві не знадобиться гребінець, якщо спочатку у нього на голові було аж 𝑆 волосин? 
//3. Старовинна задача. Є 100 грн. Скільки биків, корів і телят можна купити за всі ці гроші, якщо оплата за бика 10 грн., за корову – 5 грн., за теля – 0,5 грн. і потрібно купити 100 голів.

#include <iostream>
#include <stdio.h>

using namespace std;



void Zavd1()
{
  int n;

  cout << "Введіть оцінку від 1 до 12: " << endl;
  cin >> n;

  if(n==1)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==2)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==3)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==4)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==5)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==6)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==7)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==8)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==9)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==10)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==11)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else if(n==12)
  {
    while (n>0)
    {
      cout << "beep(523,500);" << endl;
      n--;
    } 
  }
  else 
  {
    cout << "beep(523,1500);" << endl;
  }
}
void Zavd2()
{
   int hair;
   int result=0;
   int c;
   cout << "Скільки волосин було у дідуся на голові? " << endl;
   cin >> hair;
   c = 1;

   while(hair>0)
   {
    hair = hair-c;
    c = c*2;
    result=result+1;
   }

   cout << "Через " << result << " днів дідусю не знадобиться гребінець!" << endl;

}
void Zavd3()
{
    float money = 100;
    int price_bull = 10;
    int price_cow = 5;
    float price_calf =0.5;
    int counter =0;
    int bull=0;
    int cow=0;
    int calf=0;

    money = 100;

    while(counter<100)
    {
      if(money>=price_calf)
      {
        money = money-price_calf;
        counter ++;
        calf ++;
      }
      else
      {
        counter = 100;
      }
      if(money>=(price_cow*11))
      {
        money = money-price_cow;
        counter ++;
        cow ++;
      }
      if(money>=(price_bull*8))
      {
        money = money - price_bull;
        counter ++;
        bull ++;
      } 
      
    }
    cout << "Отже, за ці 100 гривень можна купити: " << endl;
    cout << "Биків: " << bull << endl;
    cout << "Корів: " << cow << endl;
    cout << "Телят: " << calf << endl;

}
int main()
{

  int number;

  cout << "Введіть номер задачі: " << endl;
  cin >> number;

  if(number==1)
  {
    Zavd1();
  }
  else if(number==2)
  {
    Zavd2();
  }
  else if(number==3)
  {
    Zavd3();
  }
  else
  {
    cout << "Такої задачі не існує!" << endl;
  }


}