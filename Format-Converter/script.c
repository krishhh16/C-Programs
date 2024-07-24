#include <stdio.h>

int main() {
    float lon;
    float lat;
    char info[80];
    int started = 0;

    while (scanf("%f, %f, %79s", &lon, &lat, info) == 3){
        if (started)
            printf(",\n");
        else
            started = 1;
        printf("(Latitude: %f, Longitude: %f, info: %s)", lat, lon, info);
    }
    puts("\n");
    return 0;
}