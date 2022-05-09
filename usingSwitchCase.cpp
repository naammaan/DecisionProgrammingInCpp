#include<iostream>
using namespace std;

int main(){
    int day=0; 
    int month=0;
    string bMonth;
    string sign;

    cout<<"Enter your birth month"<<endl;
    cin>>month;
    cout<<"Enter your Birth day"<<endl;
    cin>>day;
    string msg=(month>=1 && month<=12) ? "You have enterred a valid month" : "You have enterred an invalid month";
    cout<<msg<<endl;
    switch (month)
    {
    case 1: 
        bMonth="January";
        if (day>21)
        {
            sign="Aquaries";
        }
        else
        {
            sign="Capricorn";
        }
        break;
    case 2:
        bMonth="February";
        if (day<21)
        {
            sign="Aquaries";
        }
        else
        {
            sign="Pisces";
        }
        break;
    
    case 3:
        bMonth="March";
        if (day<21)
        {
            sign="Pisces";
        }
        else
        {
            sign="Aries";
        }
        break;
    case 4:
        bMonth="April";
        if (day<20)
        {
            sign="Aries";
        }
        else
        {
            sign="Taurus";
        }
        break;
    
    case 5:
        bMonth="May";
          if (day<21)
        {
            sign="Taurus";
        }
        else
        {
            sign="Gemini";
        }
        break;
    case 6:
         bMonth="June";
          if (day<21)
        {
            sign="Gemini";
        }
        else
        {
            sign="Cancer";
        }
        break;
    
    case 7:
         bMonth="July";
          if (day<23)
        {
            sign="Cancer";
        }
        else
        {
            sign="Leo";
        }
        break;

    case 8:
        bMonth="August";
          if (day<23)
        {
            sign="Leo";
        }
        else
        {
            sign="Virgo";
        }
        break;
    
    case 9:
        bMonth="September";
          if (day<23)
        {
            sign="Virgo";
        }
        else
        {
            sign="Libra";
        }
        break;

    case 10:
        bMonth="October";
          if (day<23)
        {
            sign="Libra";
        }
        else
        {
            sign="Scorpio";
        }
        break;
    
    case 11:

         bMonth="November";
          if (day<22)
        {
            sign="Scorpio";
        }
        else
        {
            sign="Sagittarius";
        }
        break;

    case 12:
         bMonth="December";
          if (day<22)
        {
            sign="Sagittarius";
        }
        else
        {
            sign="Capricorn";
        }
        break;
    
    
    default:
        cout<<"Enter a valid number between 1-12"<<endl;
        break;
    }
    
return 0;
}