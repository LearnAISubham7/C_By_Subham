#include<stdio.h>
int main(){
    int length,breath,area,perimeter;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter breath : ");
    scanf("%d",&breath);

    area = length * breath;
    perimeter = 2 * (length + breath);
    if (area < perimeter)
    {
        printf("perimeter = %d is greater than area = %d ",perimeter,area);
    }
    else if (area > perimeter)
    {
        printf("area = %d is greater than perimeter = %d",area,perimeter);
    }
    else{
        printf("area = %d equal to perimeter = %d",area,perimeter);
    }
    
    return 0;
}