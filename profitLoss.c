#include<stdio.h>
int main(){
    int costPrice,cellingPrice;
    printf("Enter costPrice : ");
    scanf("%d",&costPrice);
    printf("Enter cellingPrice : ");
    scanf("%d",&cellingPrice);

    if (costPrice < cellingPrice)
    {
        printf("profit is %d",(cellingPrice-costPrice));
    }
    else if (costPrice > cellingPrice)
    {
        printf("loss is %d",(costPrice-cellingPrice));
    }
    else{
        printf("no profit no losses ");
    }
    
    return 0;
}