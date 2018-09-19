/*This program will ask for the coordanates of the center of two rectangles
 * the Height and the Width. Then the program will conclude if those two
 * rectangles overlap or not.
 * This program is Lab 2 for the class CS 1320 given by Dr Urenda
 * Made by Jose M Yanez on 9/19/2018 :)
*/
#include <stdio.h>
#include <stdbool.h>

bool rectangleOverlap(){
    //Declaration of rectangles center height and coordinates
    //Rectangle #1
    float R1CenterX,R1CenterY,R1Height,R1Width;
    printf("Enter Rectangle 1, Center X coordinate:\n");
    scanf("%f",&R1CenterX);
    printf("Enter Rectangle 1, Center Y coordinate:\n");
    scanf("%f",&R1CenterY);
    printf("Enter Rectangle 1, Height:\n");
    scanf("%f",&R1Height);
    printf("Enter Rectangle 1, Width:\n");
    scanf("%f",&R1Width);

    double R1Bx= R1CenterX + (R1Width/2);
    double R1By = R1CenterY + (R1Height/2);
    double R1Cx= R1CenterX - (R1Width/2);
    double R1Cy = R1CenterY - (R1Height/2);

    //Rectangle #2 we only use bottom left and top right vertices
    float R2CenterX, R2CenterY, R2Height, R2Width;
    printf("Enter Rectangle 2, Center X coordinate:\n");
    scanf("%f",&R2CenterX);
    printf("Enter Rectangle 2, Center Y coordinate:\n");
    scanf("%f",&R2CenterY);
    printf("Enter Rectangle 2, Height:\n");
    scanf("%f",&R2Height);
    printf("Enter Rectangle 2, Width:\n");
    scanf("%f",&R2Width);

    double R2Bx= R2CenterX + (R2Width/2);
    double R2By = R2CenterY + (R2Height/2);
    double R2Cx= R2CenterX - (R2Width/2);
    double R2Cy = R2CenterY - (R2Height/2);
// Just checking for valid input for height and width
if (R1Height <= 0 || R1Width <= 0 || R2Height <= 0 || R2Width <= 0)
    return false;
//Start comparision to see if the rectangles do overlap or not
    if(R1Cx < R2Bx && R2Cx < R1Bx && R1Cy<R2By && R2Cy < R1By ){
        return true;
    }
    else if(R2Cx < R1Bx && R1Cx < R2Bx && R1Cy<R2By && R2Cy < R1By){
        return true;
    }
    else if(R2Cx < R1Bx && R1Cx < R2Bx && R2Cy<R1By && R2By < R1Cy) {
        return true;
    }
    else if(R1Cx < R2Bx && R2Cx < R1Bx && R2Cy<R1By && R2By < R1Cy) {
        return true;
    }
    else
        return false;

}

int main() {
    if(rectangleOverlap()){
        printf("Rectangles do Overlap!!\n");
    }
    else
        printf("Rectangles do not Overlap!\n");
    return 0;
}