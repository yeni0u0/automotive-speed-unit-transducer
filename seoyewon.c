#include <stdio.h>


int main() {
    float kmh, ms;

    printf("vehicle speed: ");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf(" %.2f km/h is %.2f m/s\n", kmh, ms);

    return 0;
}