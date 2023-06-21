// Use structures to find the volume and the total surface area of the box. 
// You need to access the members of the structure with the help of a structure pointer:
// a. With the help of (*) asterisk or indirection operator and (.) dot operator.
// b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

#include<stdio.h>

typedef struct {
    float x;
    float y;
    float z;
    float tsa;
    float v;
}box;

void assign_values(float *, float *, float *, box *);

void calc_volume(box *);

void calc_tot_surface_area(box *);

int main(){
    box b1;
    float length, breadth, height;
    
    printf("Enter the dimensions of the box (l,b,h): ");
    scanf("%f %f %f",&length,&breadth,&height);
    
    assign_values(&length, &breadth, &height, &b1);
    
    calc_volume(&b1);
    
    calc_tot_surface_area(&b1);
    
    printf("The total surface area is : %.2f\n",b1.tsa);
    printf("The total volume is : %.2f\n",b1.v);
    
    return 0;

}

void assign_values(float *l, float *b, float *h, box *ptr){
    ptr->x=*l;
    ptr->y=*b;
    ptr->z=*h;

}

void calc_volume(box *ptr){
    ptr->v= ptr->x*ptr->y*ptr->z;

}

void calc_tot_surface_area(box *ptr){
    ptr->tsa= 2*(ptr->x*ptr->y+ptr->y*ptr->z+ptr->z*ptr->x);
}
