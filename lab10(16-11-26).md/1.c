#include <stdio.h>

struct Flight {
    int number;
    char from[20];
    char to[20];
    char date[20];
    int no_of_seats;
};

int main() {
    struct Flight f;

    printf("Enter Flight Number: ");
    scanf("%d", &f.number);
    printf("Enter From City: ");
    scanf("%s", f.from);
    printf("Enter To City: ");
    scanf("%s", f.to);
    printf("Enter Date: ");
    scanf("%s", f.date);
    printf("Enter no of Seats: ");
    scanf("%d", &f.no_of_seats);

    
    if (f.no_of_seats > 0) {
        f.no_of_seats = f.no_of_seats - 1;
        printf("\nSeat Booked!\n");
    } else {
        printf("\nNo Seat Avlb!\n");
    }


    printf("\nFlight Number: %d\n", f.number);
    printf("From: %s\n", f.from);
    printf("To: %s\n", f.to);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.no_of_seats);

    return 0;
}