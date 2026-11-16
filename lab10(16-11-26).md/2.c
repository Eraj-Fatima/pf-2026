#include <stdio.h>
#include <string.h>

struct Movie {
    char title[50];
    char genre[20];
    char director[50];
    int year;
    float rating;
};

int main() {
    struct Movie movies[10];
    int n, i;
    char searchGenre[20];

    printf("How many movies you want to add? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Enter title: ");
        scanf(" %[^\n]", movies[i].title);
        printf("Enter genre: ");
        scanf(" %[^\n]", movies[i].genre);
        printf("Enter director: ");
        scanf(" %[^\n]", movies[i].director);
        printf("Enter release year: ");
        scanf("%d", &movies[i].year);
        printf("Enter rating: ");
        scanf("%f", &movies[i].rating);
    }

    
    printf("\nEnter genre to search: ");
    scanf(" %[^\n]", searchGenre);  //enter press krne tk sb lo no matter (space)

    printf("\nMovies of genre %s:\n", searchGenre);
    for (i = 0; i < n; i++) {
        if (strcmp(movies[i].genre, searchGenre) == 0) {
            printf("Title: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Year: %d\n", movies[i].year);
            printf("Rating: %.1f\n", movies[i].rating);
            printf("\n");
        }
    }

    printf("\nAll Movies Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nTitle: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Year: %d\n", movies[i].year);
        printf("Rating: %.1f\n", movies[i].rating);
    }

    return 0;
}