#include <stdio.h>
#include <stdlib.h>

// Storage for marks for Physics, Chemistry, and Math
float phy[4], chem[4], mtc[4];

int main() {
    // Variables to temporarily hold user input
    float a, b, c, d;

    // Input for Physics marks
    printf("Please enter marks for the Physics Assignment: ");
    scanf("%f", &a);
    phy[0] = a * 0.05;
    printf("Now enter marks for Physics Coursework: ");
    scanf("%f", &b);
    phy[1] = b * 0.25;
    printf("Enter Physics Midterm marks: ");
    scanf("%f", &c);
    phy[2] = c * 0.35;
    printf("Enter Physics End of Term marks: ");
    scanf("%f", &d);
    phy[3] = d * 0.35;
    float total_phy = phy[0] + phy[1] + phy[2] + phy[3];
    //displaying all the marks and the total
    for(int y=0;y<4;y++){
        printf("%.0f,",phy[y]);
        }
        printf("\nPhysics total: %.0f", total_phy);

    // Input for Chemistry marks
    printf("\n\n\nPlease enter marks for the Chemistry Assignment: ");
    scanf("%f", &a);
    chem[0] = a * 0.05;
    printf("Now enter marks for Chemistry Coursework: ");
    scanf("%f", &b);
    chem[1] = b * 0.25;
    printf("Enter Chemistry Midterm marks: ");
    scanf("%f", &c);
    chem[2] = c * 0.35;
    printf("Enter Chemistry End of Term marks: ");
    scanf("%f", &d);
    chem[3] = d * 0.35;
    float total_chem = chem[0] + chem[1] + chem[2] + chem[3];
    //displaying marks and total
    for(int x=0;x<4;x++){
        printf("%.0f,",chem[x]);
    }
    printf("Chemistry total: %.0f\n", total_chem);

    // Input for Math marks
    printf("\n\n\nPlease enter marks for the Math Assignment: ");
    scanf("%f", &a);
    mtc[0] = a * 0.05;
    printf("Now enter marks for Math Coursework: ");
    scanf("%f", &b);
    mtc[1] = b * 0.25;
    printf("Enter Math Midterm marks: ");
    scanf("%f", &c);
    mtc[2] = c * 0.35;
    printf("Enter Math End of Term marks: ");
    scanf("%f", &d);
    mtc[3] = d * 0.35;
    float total_mtc = mtc[0] + mtc[1] + mtc[2] + mtc[3];
    //displaying all the marks and total
    for(int z=0;z<4;z++){
        printf("%.0f,",mtc[z]);
    }
    printf("Math: %.0f\n", total_mtc);

    // Calculate average

    int average=(total_phy+total_chem+total_mtc)/3;
    printf("\n\n\n\nThe average is %d",average);
    return 0;
}
