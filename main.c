#include <stdio.h>
#include <stdbool.h>
#include <sys/param.h>
#include <w32api/minmax.h>

bool rectangleOverlap(){
    //Declaration of rectangles center height and coordinates
    //Rectangle #1
    float R1CenterX = 0, R1CenterY=0, R1Height = 1, R1Width =1;
    double R1Bx= R1CenterX + (R1Width/2);
    double R1By = R1CenterY + (R1Height/2);
    double R1Cx= R1CenterX - (R1Width/2);
    double R1Cy = R1CenterY - (R1Height/2);


    //Rectangle #2 we only use bottom left and top right vertices
    float R2CenterX = 1, R2CenterY=1, R2Height = 2, R2Width =3;
    double R2Bx= R2CenterX + (R2Width/2);
    double R2By = R2CenterY + (R2Height/2);
    double R2Cx= R2CenterX - (R2Width/2);
    double R2Cy = R2CenterY - (R2Height/2);


    if(R1Cx < R2Bx && R2Cx < R1Bx && R1Cy<R2By && R2Cy < R1By ){
        printf("Rectangles do Overlap!!\n");
        double newRectCx = max(R1Cx,R2Cx);
        double newRectCy = max(R1Cy,R2Cy);
        double newRectBx = max(R1Bx,R2Bx);
        double newRectBy = max(R1By,R2By);
        double rectangleMidpointX = ((R1Cx + R2Cx)/2);
        double rectangleMidpointY = ((R1Cy + R2Cy)/2);
        printf("%d\n",newRectCx);
        return true;
    }
    else if(R2Cx < R1Bx && R1Cx < R2Bx && R1Cy<R2By && R2Cy < R1By){
        printf("Rectangles do Overlap!\n");
        return true;
    }
    else if(R2Cx < R1Bx && R1Cx < R2Bx && R2Cy<R1By && R2By < R1Cy) {
        printf("Rectangles do Overlap!!!");
        return true;
    }
    else if(R1Cx < R2Bx && R2Cx < R1Bx && R2Cy<R1By && R2By < R1Cy) {
        printf("Rectangles do Overlap!!!");
        return true;
    }
    else printf("Rectangles do not Overlap!!!");

}




int main() {
    rectangleOverlap();
    return 0;
}