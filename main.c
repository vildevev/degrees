//
//  main.c
//  Degrees
//
//  Created by Vilde Vevatne on 17/04/2017.
//  Copyright © 2017 Vilde Vevatne. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

 static float lastTemperature = 50.0; 

float fahrenheitFromCelcius(float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celcius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelcius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return 0;
}
