#include <stdio.h>
#include <string.h>

struct movie_t {

    char title[20];
    char director[20];
    float length;
    float rating;

};

void top5(struct movie_t*, int);
void print_movie(struct movie_t);

int main() {

    struct movie_t m1 = {"m", "a", 83, 1};
    struct movie_t m2 = {"a", "s", 23, 2};
    struct movie_t m3 = {"h", "d", 87, 3};
    struct movie_t m4 = {"b", "f", 99, 4};
    struct movie_t m5 = {"a", "g", 123, 5};

    struct movie_t movies[] = {m1, m2, m3, m4, m5};

    top5(movies, 5);

    return 0;
}

void top5(struct movie_t *movies, int movies_count) {

    char *names[movies_count];

    for(int i = 0; i < movies_count; i++) 
        names[i] = movies[i].title;


    char t[20];

    for(int i = 0; i < movies_count; i++) {
       
        for(int j = 0; j < movies_count; j++) {
            
            if(strcmp(names[i], names[j]) < 0) {

                strcpy(t, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], t);

            }

        }

    }

    for(int i = 0; i < movies_count; i++) {

        if(movies[i].title == names[i] && movies[i].length > 86)
            print_movie(movies[i]);

    }

}

void print_movie(struct movie_t m) {

    printf("movie: %s\t dir: %s\t len: %.2f\t rating: %.1f\n", m.title, m.director, m.length, m.rating);

}