#include <stdio.h>

int main() 
{
    int total_seconds, hours, minutes, seconds;

    printf("Enter time=");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

}