#include <stdio.h>
 
int main()
{
    int answer, score = 0;
 
    printf("\n==================================\n");
    printf("       WELCOME TO QUIZ GAME       \n");
    printf("==================================\n");
 
    // Question 1
    printf("\n1. Who is the father of C language?\n");
    printf("1. James Gosling\n");
    printf("2. Dennis Ritchie\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Charles Babbage\n");
 
    printf("Enter your answer: ");
    scanf("%d", &answer);
 
    if(answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer! Correct answer is Dennis Ritchie.\n");
    }
 
    // Question 2
    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("1. .\n");
    printf("2. ,\n");
    printf("3. ;\n");
    printf("4. :\n");
 
    printf("Enter your answer: ");
    scanf("%d", &answer);
 
    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer! Correct answer is ;\n");
    }
 
    // Question 3
    printf("\n3. Which function is used to print output in C?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. main()\n");
    printf("4. print()\n");
 
    printf("Enter your answer: ");
    scanf("%d", &answer);
 
    if(answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer! Correct answer is printf().\n");
    }
 
    // Question 4
    printf("\n4. Which data type is used to store integers?\n");
    printf("1. float\n");
    printf("2. char\n");
    printf("3. int\n");
    printf("4. double\n");
 
    printf("Enter your answer: ");
    scanf("%d", &answer);
 
    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer! Correct answer is int.\n");
    }
 
    // Question 5
    printf("\n5. Which loop executes at least once?\n");
    printf("1. for loop\n");
    printf("2. while loop\n");
    printf("3. do-while loop\n");
    printf("4. None\n");
 
    printf("Enter your answer: ");
    scanf("%d", &answer);
 
    if(answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer! Correct answer is do-while loop.\n");
    }
 
    // Final Result
    printf("\n==================================\n");
    printf("          QUIZ RESULT             \n");
    printf("==================================\n");
 
    printf("Total Questions : 5\n");
    printf("Correct Answers : %d\n", score);
    printf("Wrong Answers   : %d\n", 5 - score);
    printf("Your Score      : %d/5\n", score);
 
    if(score == 5)
        printf("Excellent Performance!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");
 
    printf("==================================\n");
 
    return 0;
}
