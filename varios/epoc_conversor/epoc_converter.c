#include <stdio.h>
#include <time.h>
#include <stdint.h>

int main(void)
{
    int64_t epoc_time;
    struct tm ts;
    char buf[80];

    printf("Ingresa el epoch time a convertir: ");
    if (scanf("%lld", &epoc_time) != 1) {
        printf("Error: Ingresa un número válido.\n");
        return 1;
    }

    // Convertir el int64_t a time_t (que normalmente es long)
    time_t raw_time = (time_t)epoc_time;
    
    // Usar localtime con el time_t correcto
    struct tm *ts_ptr = localtime(&raw_time);
    if (!ts_ptr) {
        printf("Error: No se pudo convertir el tiempo.\n");
        return 1;
    }
    ts = *ts_ptr;

    strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", &ts);
    printf("Tiempo convertido: %s\n", buf);

    return 0;
}
