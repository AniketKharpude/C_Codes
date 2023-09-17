//Write_a_C_Program_to_Calculate_Difference_Between_Two_Time_Periods
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct time
{
	int seconds;
	int minutes;
	int hours;
};
void main()
{
		struct time start_time, stop_time, diff_time;
		printf("Enter Strat Time In hh:mm:ss Format:");
		scanf("%d%d%d",&start_time.hours,&start_time.minutes,&start_time.seconds);
		printf("Enter Stop Time In hh:mm:ss Format:");
		scanf("%d%d%d",&stop_time.hours,&stop_time.minutes,&stop_time.seconds);
		printf("%d:%d:%d\n",start_time.hours,start_time.minutes,start_time.seconds);
		printf("%d:%d:%d\n",stop_time.hours,stop_time.minutes,stop_time.seconds);
		diff_time.hours = stop_time.hours - start_time.hours;
		diff_time.minutes = stop_time.minutes - start_time.minutes;
		diff_time.seconds = stop_time.seconds - start_time.seconds;
		if ( diff_time.seconds > 60)
		{
			diff_time.seconds - 60;
			diff_time.minutes++;
		}
		if ( diff_time.minutes > 60 )
		{
			diff_time.minutes - 60;
			diff_time.hours++;
		}
		printf("%d:%d:%d\n",diff_time.hours,diff_time.minutes,diff_time.seconds);
}