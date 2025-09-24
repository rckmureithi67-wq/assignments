/*
Name:Mugendi Eric Mureithi
Reg no:CT100/G/26150/25
Description:Program to compute volume
Volume=Pie * radius^2* h
*/

#include <stdio.h>

int main () {
	//variable declaration

	float pie, radius ,height , volume;
	
     
    //prompt the user to enter radius
   printf("\n Enter radius: ");
    scanf("%f", &radius);
    
    //prompt the user to enter height
    printf("\n Enter height: ");
    scanf("%f", &height); 
    
    pie = 3.142;
    
    //compute volume
    volume = pie * radius * radius * height;
    
    //display volume
    printf("\n Volume is %.2f ",volume);
    
    return 0;

}
