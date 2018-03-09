#include<iostream>


class Time{
 
	int hour;
	int minutes;

public:
	Time(){}
	Time(int h, int m):hours(h),minutes(m){}
	Time sum(const Time& t);
	show(){}

};

Time Time::sum(const Time& t)
{
	Time total;
	total.minutes=minutes+t.minutes;
	total.hours=hours+t.hours+total.minutes/60;
	total.minutes%=60;
	return 0;

}


