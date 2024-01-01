#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get card Number
    long cardNumber;
    cardNumber = get_long("Number: ");
    // Store the original card number in a separate variable
    long originalCardNumber = cardNumber;
    long originalCardNumberr = cardNumber;
    // Checksum Algorithm
    int sum = 0;
    int index = 0;
    while (cardNumber > 0)
    {
        int digit = cardNumber % 10;
        if (index % 2 == 1)
        { // Every other digit starting from the second-to-last
            int product = digit * 2;
            while (product > 0)
            {
                sum += product % 10;
                product /= 10;
            }
        }
        else
        {
            sum += digit;
        }
        cardNumber /= 10;
        index++;
    }
    // CardType Algorithm
    double digitCount = 0.0;
    while (originalCardNumber != 0)
    {
        originalCardNumber /= 10;
        digitCount++;
    }
    double base = 10.0;
    double dividedCard;
    dividedCard = pow(base, digitCount - 2.0);
    int dividedType;
    dividedType = originalCardNumberr / dividedCard;
    // printf result
    if (sum % 10 == 0)
    {
        if (dividedType == 34 || dividedType == 37)
        {
            printf("AMEX\n");
        }
        else if (51 <= dividedType && dividedType <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if ((40 <= dividedType && dividedType <= 49) && (digitCount == 13.0 || digitCount == 16.0))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}