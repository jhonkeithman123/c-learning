#include <stdio.h>

/**
 * 12 - Ounce of beer
 * 
 * 365 - 1 year
 * 
 * 15 pounds of calorie gain in one year
 * from drinking 12 ounce of beer everyday.
 * 
 * beer-to-weight-gain = constant
 * 
 * Ask the user how many beers they expect to consume each day and also
 * the amount of money theyy spend on it.
 * 
 * Goal: Write a program to determine:
 * 1. How many beers will the user consume over the course of the year?
 * 2. Assuming a beer is 150 calories,
 *    how many calories will they take in from beer alone
 *    over the course of the year?
 * 3. How much weight can the user expect to gain in one year based
 *    on the number of 12-ounce beers they consume every day?
 * 4. How much the user will spend on beer this year?
 * 
 * All outputs should be 2 digits precision after the decimal point!
 * Assume a year is 365 days (ignore leap years).
 * 
 * Input specification
 * 1. The 12-ounces beers consumed each day will be a 
 *    non-negative number.
 * 2. The user can specify the brand of the beer and its price
 *    because its not all the same for all people.
 * 
 ** The user input must be in italics while the program is in bold
 * 
 * The bold in print is \33[1m\nThis is a bold text\n\33[0m
 * example: printf("\33[1mThis is a bold text\33[0m");
 * 
 * The italic in print is \33[3m\nThis is an italic text\n\33[0m
 * example: printf("\33[3mThis is an italic text\n\33[0m");
 */

int main() {
    const int year = 365; //* This is the number of days in a year.
    const int caloriesPerPound = 3650.0f; //* This is the daily limit of calories a typical adult have.
    const float beerCalorie = 150.00f; //* This is the calories that is in a regular beer 12 oz.

    float beerADay = 0.0f; //* This is the beer per day that the user inputs.
    float beerQuantity = 0.0f; //* This is the quantity of beer per year.
    float price = 0.0f; //* The price of a beer.
    float totalPrice = 0.0f; //* Total price of the beer in a year.
    float totalCalories = 0.0f; //* This is the total calories that the user will gain from the beer alone in a year.
    float poundsFromBeer = 0.0f; //* Formula in calorie to pounds is 1 pound is equal to 3650 calories

    printf("\33[1mOn average, how many beers will you be consuming each day? \33[0m");
    scanf("%f", &beerADay);
    printf("\33[3m%.1f\n\33[0m", beerADay);

    printf("\33[1mOn average, how much will you pay for each can of beer? \33[0m");
    scanf("%f", &price);
    printf("\33[3m%.2f\n\33[0m", price);

    beerQuantity = beerADay * year;
    printf("\33[1mThat is approximately %.2f beers in one year.\n\33[0m", beerQuantity);

    totalCalories = beerCalorie * beerQuantity;
    printf("\33[1mIn one year, you will consume approximately %.2f calories from beer alone.\n\33[0m", totalCalories);

    poundsFromBeer = totalCalories / caloriesPerPound;
    printf("\33[1mWithout diet or exercise to counter these calories, you can expect to gain %.2f pounds from drinking that much beer this year.\n\33[0m", poundsFromBeer);
    
    totalPrice = price * beerQuantity;
    printf("\33[1mYou will spend approximately $%.2f on beer this year.\n\33[0m", totalPrice);
    return 0;
}