//To calculate force of attraction on a body of mass m due to gravity:
#include <stdio.h>
float force(float m){
    float g = 9.8;
    float force = m * g;
    printf("The force of attraction on the body is %f", force);
}

int main(){
    float mass;
    printf("Enter the mass of the body in KG: \n");
    scanf("%f", &mass);
    force(mass);
    return 0;
}