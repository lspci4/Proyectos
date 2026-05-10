#include <stdio.h>
#include <time.h>

struct persona {
    char name[256];
    struct startdate {
        struct tm date;
        struct timespec presicion;
    } bdate;
};

int main(void) {
    struct startdate fecha_suelta = {
        .date = {.tm_year = 2026 - 1900, .tm_mon = 5 - 1, .tm_mday = 9},
        .presicion = {.tv_sec = 0, .tv_nsec = 1000},
    };
    printf("año: %d\n", fecha_suelta.date.tm_year + 1900);

    struct persona juan = {
        .name = "Juan",
        .bdate =
            {
                .date = {.tm_year = 1990 - 1900, .tm_mon = 0, .tm_mday = 15},
                .presicion = {.tv_sec = 0, .tv_nsec = 1000},
            },
    };

    printf("%s nació el %d-%02d-%02d\n",
           juan.name,
           juan.bdate.date.tm_year + 1900,
           juan.bdate.date.tm_mon + 1,
           juan.bdate.date.tm_mday);
}
