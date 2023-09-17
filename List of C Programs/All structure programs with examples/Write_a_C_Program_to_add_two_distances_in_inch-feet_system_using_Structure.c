//Write_a_C_Program_to_add_two_distances_in_inch-feet_system_using_Structure
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct distance
{
	int feet;
    float inch;
};
void main()
{
	struct distance a,b,sum_distances;
	printf("Enter Two Distance1:");
	scanf("%d%f",&a.feet,&a.inch);
	printf("Enter Two Distance2:");
	scanf("%d%f",&b.feet,&b.inch);
	sum_distances.feet = a.feet + b.feet;
	sum_distances.inch = a.inch + b.inch;
	if(sum_distances.inch > 12)
	{
		sum_distances.inch = sum_distances.inch - 12;
		++sum_distances.feet;
	}
	printf("Sum Of Total Distances: %d-%f",sum_distances.feet,sum_distances.inch);
}