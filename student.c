#include <stdio.h>
/**
 * This program grades marks of a student depending on gender.
 * Returns: Grade and Gender
*/
int main() {
    int marks;
    char grade;
    char gender;
    
    printf("Enter gender ('F'or'M'): ");
    scanf("%c", &gender);
    
    if (gender == 'M'){
        printf("Enter marks(0-100): ");
        scanf("%d", &marks);
        
        if(marks < 0 || marks > 100){
            printf("Invalid Marks!!");
            
            return 0;
        }
        
        if (marks >= 90 && marks <= 100)
            grade = 'A';
            
            else if (marks >= 70 && marks < 90)
            grade = 'B';
            
            else if (marks >= 50 && marks < 70)
            grade = 'C';
            
            else if (marks >= 30 && marks < 50)
            grade = 'D';
            
            else
            grade = 'F';
            
            printf("Grade: %c\t Gender: %c\n", grade, gender);
        
    }
    
    else if (gender == 'F'){
        printf("Enter marks(0-100): ");
        scanf("%d", &marks);
        
        if(marks < 0 || marks > 100){
            printf("Invalid Marks!!");
            
            return 0;
        }
        
        if (marks >= 80 && marks < 100)
        grade = 'A';
        
        else if (marks >= 60 && marks < 80)
        grade = 'B';
        
        else if (marks >= 40 && marks < 60)
        grade = 'C';
        
        else if (marks >= 20 && marks < 40)
        grade = 'D';
        
        else
        grade = 'F';
        
        printf("Grade: %c\t Gender: %c\n", grade, gender);
    }
    return 0;
}
