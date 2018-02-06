#include <stdio.h>
#define SWIMMING 1.5;
#define RUNNIG 40;
#define RIDING 10;
#define _CRT_SECURE_NO_WARNINGS
void main()
{
	double Swimming_speed, Running_speed, Speed_riding;
	double Swimming_time, Running_time, time_riding,total;



	printf("enter Swimming_speed, Running_speed, Speed_riding  \n");
	scanf_s("%lf%lf%lf", &Swimming_speed, &Running_speed, &Speed_riding);
		Swimming_time = 1.5/Swimming_speed;
		Running_time = 40/Running_speed;
		time_riding = 10/Speed_riding;
		total = Swimming_time + Running_time + time_riding;
		printf("Swimming_time %lf\n", Swimming_time);
		printf("Running_time %lf\n", Running_time);
		printf("time_riding %lf\n", time_riding);
		printf("total %.2lf\n", total);

}

/*Triathlon calculation*/
