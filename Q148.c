#include <stdio.h>
#include <stdbool.h>
typedef struct {
    int x;
    int y;
    float z; 
} Point;


bool are_points_identical(Point p1, Point p2) {
  
    if (p1.x != p2.x) {
        return false;
    }
    if (p1.y != p2.y) {
        return false;
    }
    if (p1.z != p2.z) {
        return false;
    }
    return true;
}
int main() {

    Point a = {10, 20, 5.5f};
    Point b = {10, 20, 5.5f};

    if (are_points_identical(a, b)) {
        printf("Example 1: a and b are identical.\n");
    } else {
        printf("Example 1: a and b are NOT identical.\n");
    }
    Point c = {10, 20, 5.5f};
    Point d = {10, 99, 5.5f}; // Different 'y' value

    if (are_points_identical(c, d)) {
        printf("Example 2: c and d are identical.\n");
    } else {
        printf("Example 2: c and d are NOT identical.\n");
    }
    Point e = {1, 1, 1.0f};
    Point f = {1, 1, 1.00001f}; // Float difference

    if (are_points_identical(e, f)) {
        printf("Example 3: e and f are identical.\n");
    } else {
        printf("Example 3: e and f are NOT identical.\n");
    }

    return 0;
}
