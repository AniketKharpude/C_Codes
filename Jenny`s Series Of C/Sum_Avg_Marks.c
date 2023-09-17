#include <stdio.h>
void main()
{
    int i;
    float sum, avg, marks[5];
    printf("Entre Array Elements:");
    /* Initialising Float Array At Runtime*/
    for (i = 0; i < 5; i++)  
    {
        scanf("%f", &marks[i]);
        sum = sum + marks[i];
    }
    // Printing Average And Sum.
    avg = sum / 5;
    printf("Sum is:%f\n", sum);
    printf("Average is:%f", avg);
}