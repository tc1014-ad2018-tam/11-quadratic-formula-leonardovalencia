/*
 * This program is used for calculating the roots of a quadratic equation. It asks the user to introduce the values of
 * a, b and c. Then it verifies that the introduced values are numbers, otherwise it let them knows if not.
 * Afterwards, it uses the discriminant to determine the nature of the roots. The discriminant is a simple formula which
 * allows you to determine beforehand whether the values introduced will produce one or two real roots, or none at all.
 *
 * Date: 13.10.2018
 * Author: Marco Leonardo Valencia
 * Contact: a01412017@itesm.mx
 */


#include <stdio.h>

int main() {

    //First we declare the variables we need, for every value of input we will need three variables
    // One variable for the input of the user
    // One only for the double part of the string received in the input
    // And one for the string part of the input
    double x1, x2;
    double resa;
    char ina[100];
    char *trasha;
    double resb;
    char inb[100];
    char *trashb;
    double resc;
    char inc[100];
    char *trashc;
    double discriminant;


    //Now we will ask the user for the input values for our quadratic function

    printf("I´m going to helo you calculate the roots of a quadratic equation \n Please give me the (a) value of the equation\n");
    fgets(ina, sizeof(ina), stdin);

    printf("Now, please give me the (b) value of the equation\n");
    fgets(inb, sizeof(inb), stdin);

    printf("Lastly give me the (c) value of the equation\n");
    fgets(inc, sizeof(inc), stdin);

    //Now we will obtain the double part of the input given in  the variables ina, inb and inc

    resa = strtod(ina, &trasha);
    resb = strtod(inb, &trashb);
    resc = strtod(inc, &trashc);

    //Now we will calculate de discriminant

    discriminant = (pow(resb, 2.0) - (4 * (resa * resc)));

    //At last we will use a if function to determine whether
    // we can calculate the squares of our quadratic functions

    if (resa != 0 && discriminant > 0) {
        x1 = (-resb + (sqrt(discriminant))) / 2 * resa;
        x2 = (-resb - (sqrt(discriminant))) / 2 * resa;
        printf("Root 1 is = %lf\n", x1);
        printf("Root 2 is = %lf\n", x2);
    } else {
        if (resa != 0 && discriminant == 0) {
            x1 = -resb / 2 * resa;
            x2 = x1;
            printf("Root 1 is = %lf\n", x1);
            printf("Root 2 is = %lf\n", x2);
            printf("There is only one real root");
        } else {
            if (resa != 0 && discriminant < 0) {
                printf("There is no real answer\n Both answer are imaginary");
            }
        }

    }

    return 0;
}