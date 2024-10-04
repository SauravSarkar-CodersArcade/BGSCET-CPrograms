#include <stdio.h>
struct Point {
    int x;
    int y;
};
struct Point inputPoint(){
    struct Point p;
    printf("Enter the x coordinate:\n");
    scanf("%d", &p.x);
    printf("Enter the y coordinate:\n");
    scanf("%d", &p.y);
    return p;
}
void display(struct Point p){
    printf("The x & y coordinates are: (x, y)(%d, %d)\n", p.x, p.y);
}
int main() {

    struct Point p = inputPoint();
    display(p);
    return 0;
}
