# String-case-change
## Aim
Write a program change the case of any string entered.
## Theory
In strings, each character has a specified ascii value. In this program, we have used the same concept to change the case of every character in the string entered. The ascii code of "A" is 65 while for "a" it is 97. The difference between these values is 32. If the character is in uppercase, 32 is added to the ascii value of that character to get the lowercase character. Similarly, if the character is in lowercase, 32 is subtracted from the ascii value of that character to obtain the uppercase of the character.
## Algorithm
Step 1:Start. 
Step 2:Initialize a string and take input from user. 
Step 3:Using for loop, we first check if the character i is currently pointing to is null. 
Step 4:If character is uppercase, within if statement, we increment the value of the character by 32. If the character is lowercase, using a else if statement, we decrement the value of the character by 32. 
 Step 5:Print the final output. 
 Step 6:End. 
## Conclusion
In this practical, we used the concept of ascii values of alphabets in upper or lower case to convert them to the other by using basic loops.
