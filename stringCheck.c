#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    int count;
    char planets[][20] = {
                "Mercury", "Venus", "Earth",
                "Mars", "Jupiter", "Saturn",
                "Uranus", "Neptune", "Pluto"
    };

    count = sizeof(planets) / sizeof(planets[0]);

    while (1) {
        int Num = 0;
        char a[20];
        printf("Planet name ? ==> ");
        scanf("%s", a);

        if (strcmp(a, "exit") == 0) {
            break;
        }

        for (int i = 0; i < count; i++) {
            if (strcmp(planets[i], a) == 0) {
                printf("%s is planet %d\n", a, i + 1);
                break;
            }
            else if (planets[i] != a) {
                ++Num;
                if (Num == 9) {
                    printf("%s is not a planet\n", a);
                }
            }
        }     
    }
}