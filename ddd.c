#include <stdio.h>
int main(void)
{
    char cData; //character variable
    
    /*Get value from the user*/
    printf("\n Enter any character: ");
    scanf("%c", &cData);
    
    //check range for alphabate
    if((cData >= 97 && cData <= 122) || (cData >= 65 && cData <= 90))
    {
        printf("\n It is an aplhabate.\n\n");
    }
    else
    {
        printf("\n It is not an aplhabate.\n\n");
    }
    return 0;
}
