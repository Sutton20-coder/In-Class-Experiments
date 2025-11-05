#include <stdio.h>


#define MAX_WALLS 20

typedef struct{
    double width;
    double height;
} Rectangle;

typedef struct{
    Rectangle floor;
    Rectangle walls[MAX_WALLS];
    int count_walls;
} Room;

Rectangle Rectangle_create(double w, double h);

double Rectangle_getPerimeter(Rectangle *r);

Room Room_create(double w_floor, double h_floor);
void Room_addWall(Room *r, double w_wall, double h_wall);

double Room_getFloorPerimeter(Room *r);
double Room_getWallsPerimeter(Room *r);

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


    /*Room living_room = Room_create(12, 12);
    Room_addWall(&living_room, 13, 13);
    Room_addWall(&living_room, 13, 13);
    Room_addWall(&living_room, 13, 13);
    Room_addWall(&living_room, 13, 13);*/
    




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



Room Room_create(double w_floor, double h_floor){
    Room r;
    r.floor = Rectangle_create(w_floor, h_floor);
    r.count_walls = 0;
    return r;
}

/*void Room_addWall(Room *r, double w_wall, double h_wall){
    if(r->count_walls >= MAX_WALLS){
        printf("Cannot have more than %d walls\n", MAX_WALLS);
        return;
    }
    r->walls(r->count_walls) = Rectangle_create(w_wall, h_wall);
    r->count_walls++;

}*/
