#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrToCelsius(int fahr);

int main(){
    for(int fahr = LOWER; fahr <= UPPER; fahr+=STEP){
        printf("F(%3d)\tC(%3.2f)\n", fahr, fahrToCelsius(fahr));
    }
}

float fahrToCelsius(int fahr){
    return (5.0/9.0)*(fahr-32.0);
}