/*#include <stdio.h>

// Function to increment time by seconds
void incrementTime(int *hours, int *minutes, int *seconds, int s) {
    int totalSeconds = *hours * 3600 + *minutes * 60 + *seconds;
    
    totalSeconds += s;


    *hours = totalSeconds / 3600;
    *minutes = (totalSeconds % 3600) / 60;
    *seconds = totalSeconds % 60;
}
int main() {
    int hours, minutes, seconds, additionalSeconds;

    // Accept time from the user
    printf("Enter hours, minutes, and seconds separated by spaces: ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Accept additional seconds to increment the time
    printf("Enter additional seconds: ");
    scanf("%d", &additionalSeconds);

    // Increment time using the function
    incrementTime(&hours, &minutes, &seconds, additionalSeconds);

    // Display the new time
    printf("New time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}*/
#include<stdio.h>
void time(int *hour, int *minute,int *second,int s){
    int total_time = *hour * 3600 + *minute * 60 + *second;
    total_time+=s;
    *hour = total_time / 3600;
    *minute = (total_time % 3600) / 60;
*second = total_time  % 60;
}
int main(){
    
    int hour,minute,second;
    printf("Enter hour minute and second :");
    scanf("%d %d %d",&hour,&minute,&second);

    int addsecond;
    printf("enter the additional second ");
    scanf("%d",&addsecond);

    time(&hour, &minute,&second,addsecond);

    printf("new time %02d:%02d:%02d",hour,minute,second);
    return 0;
}