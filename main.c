#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 80;
    if(m > 75){
        printf("Your Mark is %d. A..! \n",m);

    }else if(m > 65){
        printf("Your Mark is %d. B..! \n",m);

    }else if(m > 50){
        printf("Your Mark is %d. C..! \n",m);

    }else if(m > 35){
        printf("Your Mark is %d. S..! \n",m);

    }else{
        printf("Your Mark is %d. Fail W..! \n",m);
    }
    return 0;
}
