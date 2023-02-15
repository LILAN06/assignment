#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
int main (int argc, char *argv[0]) {
    int yearEntered = atoi(argv[1]);
    if ( yearEntered % 4 == 0) {
        if ( yearEntered % 100 != 0 || yearEntered % 400 == 0)
            printf("%d was a leap year", yearEntered);
        else
            printf("%d was not a leap year", yearEntered);
    }
    else {
        printf("%d was not a leap year", yearEntered); 
    }
   
return 0;
}
