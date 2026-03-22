#include <iostream>
#include <string>
using namespace std;

class time12
{
    private:
    bool pm;
    int hrs;
    int mins;
    public:
    time12()
    {
        pm=true;
        hrs=0;
        mins=0;
    }
    time12(bool ap, int h, int m)
    {
        pm=ap;
        hrs=h;
        mins=m;
    }
    void display()
    {
        cout << hrs << ':';
        if(mins < 10)
        cout << '0';
        cout << mins << ' ';
        if (pm=true)
        cout << "PM";
        else
        cout << "AM";
    }
};

class time24
{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    time24()
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    void entered_time(int h, int m, int s)
    {
       hours=h;
       minutes=m;
       seconds=s;
    }
    void display()
    {
        if(hours < 10)
        cout << '0';
        cout << hours << ';';
        if(minutes < 10)
        cout << '0';
        cout << minutes << ';';
        if(seconds < 10)
        cout << '0';
        cout << seconds;
    }
    operator time12();
};

time24::operator time12()
{
    int hrs24 = hours;
    //bool pm = hours < 12 ? false : true;
    //round secs 
    bool pm;
    if(hours < 12)
    pm=false;
    else
    pm=true;
    int roundmins = seconds < 30 ? minutes : minutes+1;
    if(roundmins ==60)
    {
        roundmins=0;
        ++hrs24;
        if(hrs24 == 12 || hrs24 == 24)
        if(pm==true)
        pm=false;
        else
        pm=true;
    }
    if(roundmins > 60)
    {
        int hr=roundmins/60;
        roundmins=roundmins-(hr*60);
        hrs24=hrs24+hr;
        if(hrs24 == 12 || hrs24 == 24)
        if(pm == true)
        pm=false;
        else
        pm=true;
    }
    int hrs12;
    if(hrs24 < 13)
    hrs12=hrs24;
    else
    hrs12=hrs24-12;
    if(hrs12==0)
    {
        hrs12=12;
        pm=false;
    }
    return time12(pm, hrs12, roundmins);
}

int main()
{
    int h, m, s;
    time24 t24;
    cout << "default time is ";
    t24.display();
    while(true)
    {
        cout <<"\n\n enter 24-hour time: \n";
        cout << "enter \nhours (0 to 23): ";
        cin >> h;
        if(h > 23)
        return(1);
        cout << "minutes: ";
        cin >> m;
        cout <<"seconds: ";
        cin >> s;
        t24.entered_time(h, m, s);
        cout << "you entered: ";
        t24.display();
        time12 t12=t24;
        cout <<"\n12-hour time: ";
        t12.display();
        cout <<"\n\n";
    }
    return 0;
}
