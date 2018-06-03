#include <stdio.h>

struct point_t {

    int x;
    int y;
    
};

struct rect_t {

    struct point_t upper_left_point;
    int width;
    int height;

};

int contains(struct rect_t, struct point_t);

int main() {

    struct point_t p = {6, 5}; 
    struct point_t p1 = {9, 5};
    struct point_t p2 = {9, 12};
    struct point_t p3 = {8, 10};
    struct rect_t r = {{8, 10}, 8, 10};


    printf("%d\n", contains(r, p));
    printf("%d\n", contains(r, p1));
    printf("%d\n", contains(r, p2));
    printf("%d\n", contains(r, p3));

    printf("\n");
    return 0;
}

int contains(struct rect_t r, struct point_t p) {

    struct point_t upper_left_point = r.upper_left_point;
    struct point_t bottom_right_point = {r.upper_left_point.x + r.width, r.upper_left_point.y - r.height};

    if(p.x >= upper_left_point.x && p.x <= bottom_right_point.x)
        if(p.y <= upper_left_point.y && p.y >= bottom_right_point.y)
            return 1;


    return 0;
}