#include <stdio.h>
#include <stdlib.h>

int main(){
    
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("the value of XEROX is: %d\n", xerox);
    printf("the value of GOOGLE is: %d\n", google);
    printf("the value of EBAY is: %d\n", ebay);


    return 0;

}