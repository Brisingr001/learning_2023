//Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

void swapFields(Point *p1, Point *p2) {
    // Swap the fields using temporary variables
    int tempX = p1->x;
    int tempY = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    Point point1, point2;

    printf("Enter the x-coordinate of point 1: ");
    scanf("%d", &(point1.x));

    printf("Enter the y-coordinate of point 1: ");
    scanf("%d", &(point1.y));

    printf("Enter the x-coordinate of point 2: ");
    scanf("%d", &(point2.x));

    printf("Enter the y-coordinate of point 2: ");
    scanf("%d", &(point2.y));

    printf("\nBefore swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
