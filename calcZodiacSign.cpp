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

    if(month==1)
    {
        bMonth="January";
        if (day>21)
        {
            sign="Aquaries";
        }
        else
        {
            sign="Capricorn";
        }
        
    }
    else if(month==2)
    {
        bMonth="February";
        if (day<21)
        {
            sign="Aquaries";
        }
        else
        {
            sign="Pisces";
        }
    }
     else if(month==3)
    {
        bMonth="March";
        if (day<21)
        {
            sign="Pisces";
        }
        else
        {
            sign="Aries";
        }
    }
     else if(month==4)
    {
        bMonth="April";
        if (day<20)
        {
            sign="Aries";
        }
        else
        {
            sign="Taurus";
        }
        
    }
     else if(month==5)
    {
        bMonth="May";
          if (day<21)
        {
            sign="Taurus";
        }
        else
        {
            sign="Gemini";
        }
        
    }
     else if(month==6)
    {
        bMonth="June";
          if (day<21)
        {
            sign="Gemini";
        }
        else
        {
            sign="Cancer";
        }
    }
     else if(month==7)
    {
        bMonth="July";
          if (day<23)
        {
            sign="Cancer";
        }
        else
        {
            sign="Leo";
        }
    }
     else if(month==8)
    {
        bMonth="August";
          if (day<23)
        {
            sign="Leo";
        }
        else
        {
            sign="Virgo";
        }
    }
     else if(month==9)
    {
        bMonth="September";
          if (day<23)
        {
            sign="Virgo";
        }
        else
        {
            sign="Libra";
        }
    }
     else if(month==10)
    {
        bMonth="October";
          if (day<23)
        {
            sign="Libra";
        }
        else
        {
            sign="Scorpio";
        }
    }
     else if(month==11)
    {
        bMonth="November";
          if (day<22)
        {
            sign="Scorpio";
        }
        else
        {
            sign="Sagittarius";
        }
    }
     else if(month==12)
    {
        bMonth="December";
          if (day<22)
        {
            sign="Sagittarius";
        }
        else
        {
            sign="Capricorn";
        }
    }
    else{
        cout<<"Enter a valid number between 1-12"<<endl;
    }

    cout<<"Your birth month is "+ bMonth<<endl;
    cout<<"Your birth sign is "+ sign<<endl;

return 0;
}