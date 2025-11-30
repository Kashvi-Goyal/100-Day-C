#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice;
    printf("Enter cost price and selling price=");
    scanf("%f %f", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) 
    {
        float profit = sellingPrice - costPrice;
        float profitPercentage = (profit / costPrice) * 100;
        printf("Profit = %f\n", profitPercentage);
    }
    else if (costPrice > sellingPrice) 
    {
        float loss = costPrice - sellingPrice;
        float lossPercentage = (loss / costPrice) * 100;
        printf("Loss = %f\n", lossPercentage);
    }
    else 
    {
        printf("No Profit No Loss\n");
    }
}