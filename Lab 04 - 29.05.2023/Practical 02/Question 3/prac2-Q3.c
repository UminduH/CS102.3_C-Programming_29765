#include <stdio.h>

int main()
{
    int speed, distance, time;

    printf("Enter the distance travelled(in m): ");
    scanf("%d", &distance);

    printf("Enter the time taken(in s): ");
    scanf("%d", &time);

    speed = distance / time;

    printf("Average Speed = %d m/s", speed);

    // Using integers here is a problem because if the user inputs in a distance and time resulting in a decimal value for the speed, it cannot be displayed and only the integer part will be displayed.
    // Therefore, its better to use floating point numbers(float) instead of integers(int)
    // eg: float speed, distance, time
}
