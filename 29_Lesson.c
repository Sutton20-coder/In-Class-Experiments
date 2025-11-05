#include <stdio.h>


typedef struct{
    double width;
    double height;
} Rectangle;

Rectangle Rectangle_create(double w, double h);

double Rectangle_getPerimeter(Rectangle *r);

int main (void){
    Rectangle rect = {15.4, 23.5};

    Rectangle rect2 = Rectangle_create(12.5, 8);

    printf("Width: %.2lf, Height: %.2lf\n", rect.width, rect.height);

    printf("Width: %.2lf, Height: %.2lf\n", rect2.width, rect2.height);




    Rectangle arr[3];
    arr[0] = Rectangle_create(14.2, 875.3);
    arr[1] = Rectangle_create(44.2, 84.3);
    arr[2] = Rectangle_create(447.2, 184.3);

    for(int i = 0; i < 3; i++){
        printf("Rectangle %d: perimeter %.2lf\n", i + 1, Rectangle_getPerimeter(&arr[i]));
    }






    return 0;
}



Rectangle Rectangle_create(double w, double h){
    Rectangle r;
    r.width = w;
    r.height = h;
    return r;
}


double Rectangle_getPerimeter(Rectangle *r){
    return 2 * (r->width + r->height);
}