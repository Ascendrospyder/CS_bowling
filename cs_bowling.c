//Assignment 0: CS Bowling
//zid: z5421641
//Name: Arindam Mukherjee 
//Date: 23/02/2022
//Description: The program simulates the logic for a bowling score calculator. 
#define NUM_ROUNDS 10
#include <stdio.h>

int main (void)
{
    int bowl_1 = 0; 
    int bowl_2 = 0; 
    int sum_of_score = 0; 
    
    printf("Welcome to CS Bowling!\n"); 
    int i = 0; 
    int num_frame_1 = 0; 
    int num_frame_2 = 0; 
    int total_sum = 0;  
    
    while (i < NUM_ROUNDS)
    {
        printf("Frame %d, Bowl 1: ", num_frame_1 + 1); 
        scanf("%d", &bowl_1);
        num_frame_1++; 
    
        if (bowl_1 == 10) 
        {
            sum_of_score = bowl_1;
            printf("Score for Frame: %d\n", sum_of_score);
            printf("Strike! Bonus for this frame is next two rolls.\n");   
            
        }       
      
        if (bowl_1 < 0 || bowl_1 > 10)
        {
            printf("Bowl 1 invalid!\n"); 
            bowl_1 = 0; 
        }
    
        if (bowl_1 !=10) 
        {
            printf("Frame %d, Bowl 2: ", num_frame_2 + 1); 
            scanf("%d", &bowl_2);
        
        
        
            sum_of_score = bowl_1 + bowl_2;
        
        
     
    
            if (bowl_2 < 0 || bowl_2 > 10 || sum_of_score > 10 ) {
                printf("Bowl 2 invalid!\n"); 
                sum_of_score = bowl_1;  
            }
        
       
    
            if (bowl_1 != 10 && sum_of_score == 10) 
            { 
                printf("Score for Frame: %d \n", sum_of_score);
                printf("Spare! Bonus for this frame is next roll.\n");  
            }
    
            if (bowl_1 != 10 && sum_of_score != 10)
            {
                printf("Score for Frame: %d \n", sum_of_score);
            }  
            
            
            
        }
   
        total_sum = total_sum + sum_of_score; 
        num_frame_2++; 
        i++; 
    }
     
    printf("Total Score: %d\n", total_sum); 
    return 0; 
}
