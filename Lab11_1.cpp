//Умова задачі: Скласти програму для розв’язання наведеного нижче завдання двома способами, використовуючи:
//a) команду switch;
//b) команду if;
//Ввести першу літеру назви країни і вивести кількість населення і кількість міст в ньому;

#include <iostream>

using namespace std;

int main()
{

   string letter;
   string country_name;
   string population;
   int city;
   int number;


    cout << "Введіть першу літеру країни: " << endl;
    cout << "Доступні країни: Україна, Італія, Єгипет, Мексика, Франція, США, Австралія." << endl;
    cin >> letter;

   if(letter=="У")
   {
     number = 1;
   }
   else if(letter=="І")
   {
     number = 2;
   }
   else if(letter=="Є")
   {
     number =3;
   }
   else if(letter=="М")
   {
     number = 4;
   }
   else if(letter=="Ф")
   {
      number =5;
   }
   else if(letter=="С")
   {
      number = 6;
   }
   else if(letter=="А")
   {
      number = 7;
   }
   else
   {
      number = 0;
   }

   switch(number)
   {
     case 1:
      country_name = "Україна";
      population = "43,81 мільйона";
      city = 272;    
      break;
     case 2:
      country_name = "Італія";
      population = "59,07 мільйонів";
      city = 46;
      break;
     case 3:
      country_name = "Єгипет";
      population = "104,3 мільйона";
      city = 41;    
      break;
     case 4:
      country_name = "Мексика";
      population = "126,6 мільйонів";
      city = 163;
      break;
     case 5:
      country_name = "Франція";
      population = "66,8 мільйонів";
      city = 277;
      break;
     case 6:
      country_name = "Сполучені Штати Америки";
      population = "331,9 мільйон";
      city = 30000;
      break;
     case 7:
      country_name = "Австралія";
      population = "25,74 мільйонів";
      city = 29;
      break;     

   }

   if(letter=="У")
   {
      country_name = "Україна";
      population = "43,81 мільйона";
      city = 272;
   }
   else if(letter=="І")
   {
      country_name = "Італія";
      population = "59,07 мільйонів";
      city = 46;
   }
   else if(letter=="Є")
   {
      country_name = "Єгипет";
      population = "104,3 мільйона";
      city = 41;
   }
   else if(letter=="М")
   {
      country_name = "Мексика";
      population = "126,6 мільйонів";
      city = 163;
   }
   else if(letter=="Ф")
   {
      country_name = "Франція";
      population = "66,8 мільйонів";
      city = 277;
   }
   else if(letter=="С")
   {
      country_name = "Сполучені Штати Америки";
      population = "331,9 мільйон";
      city = 30000;
   }
   else if(letter=="А")
   {
      country_name = "Австралія";
      population = "25,74 мільйонів";
      city = 29;
   }
    
   if(number!=0)
   {
    cout << country_name << endl;
    cout << "Населення: " << population << endl;
    cout << "Кілкість міст: " << city << endl;
   }else{
    cout << "Нажаль таких варіантів немає!" << endl;
   }


}