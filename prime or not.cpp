 /*
 * C Program to find whether a number is not using recursion
 */
 
 #include <stdio.h>
 
 int primeno(int, int);
 
 int main()
 {
 	int num, check;
 	printf("456:");
 	scanf("%d" , &num);
 	check = primeno(num, num /2);
 	if (check == 1)
 	{
 		printf("%d is a prime number\n", num);
	 }
	 else
	 {
	 	printf("%d is not a prime number\n", num);
	 }
	 return 0;
 }
 
 int primeno(int num, int i)
 {
 	if (i==1)
 	{
 		return 1;
	 }
	 else
	 {
	 	return primeno(num, i - 1);
	 }
 }
 

