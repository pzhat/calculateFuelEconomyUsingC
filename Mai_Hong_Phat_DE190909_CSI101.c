#include <stdio.h>
#include <math.h>
float calculateFuelEconomy(int minutes, float speed, float gasoline) {
    float distance = (speed * minutes) / 60.0; 
    return distance / gasoline; 
}

float calculateDistance(float radius, int revolutions) {
    float radiusMiles = radius / 63360.0; 
    float circumference = 2 * 3.141592 * radiusMiles; 
    return circumference * revolutions; 
}

float calculateRevisedFuelEconomy(float radius, int revolutions, float gasoline) {
    float distance = calculateDistance(radius, revolutions); 
    return distance / gasoline;
}

int main() {
    int choice, minutes, revolutions;
    float speed, gasoline, radius;

    do {
        printf("\nMenu:\n");
        printf("1. Calculate Fuel Economy\n");
        printf("2. Calculate Distance Traveled\n");
        printf("3. Calculate Revised Fuel Economy\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Input the number of minutes the car has traveled: ");
                scanf("%d", &minutes);
                printf("Input the speed of the car: ");
                scanf("%f", &speed);
                printf("Input the gasoline consumed: ");
                scanf("%f", &gasoline);
                printf("Fuel efficiency: %.2f miles per gallon\n", calculateFuelEconomy(minutes, speed, gasoline));
                break;
            case 2:
                printf("Input the radius of the tires: ");
                scanf("%f", &radius);
                printf("Input the number of revolutions of the tires: ");
                scanf("%d", &revolutions);
                printf("The car has traveled %.2f miles.\n", calculateDistance(radius, revolutions));
                break;
            case 3:
                printf("Input the radius of the car's tires: ");
                scanf("%f", &radius);
                printf("Input the number of revolutions the car's tires make: ");
                scanf("%d", &revolutions);
                printf("Input the amount of gas used: ");
                scanf("%f", &gasoline);
                printf("Revised fuel efficiency: %.2f miles per gallon\n", calculateRevisedFuelEconomy(radius, revolutions, gasoline));
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
