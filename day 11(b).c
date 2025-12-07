#include <stdio.h>

int main() {
    float cp, sp,profit,loss;
    printf("Enter cost price amd selling price");
    scanf("%f %f", &cp,&sp);

    if (sp>cp)
    {
        profit = (sp-cp);
        printf("profit percent%.1f% %\n", (profit*100)/cp);
    } 
    else if (sp<cp)
    {
        loss= cp-sp;
        printf("loss percent %.1f% %\n", (loss*100)/cp);
    }
    else
    {
        printf("No profit No loss\n");
    }

    return 0;
}
