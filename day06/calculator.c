#include <stdio.h>

float multiply(float a, float b)
{
	float result = a * b;
	return result;
}

float divide(float a, float b)
{
	float result = a / b;
	return result;
}

float add(float a, float b)
{
	float result = a + b;
	return result;
}

float subtract(float a, float b)
{
	float result = a - b;
	return result;
}

int main(){
	int operation = 0;
	float firstNumber = 0.00;
	float secondNumber = 0.00;
	float operatedNumber = 0.00;

	printf("Choose an operation\n");
	printf("Enter 0 to exit Program\n Enter 1 to multiply\n Enter 2 to divide\n Enter 3 to add\n Enter 4 to Subtract:\n");
	scanf("%d", &operation);

	while (operation != 0) {

		if (operation == 1){
		printf("Enter two numbers to multiply\n");
		printf("Pick First number\n");
		scanf("%f", &firstNumber);
		printf("Pick Second number\n");
		scanf("%f", &secondNumber);
		operatedNumber = multiply(firstNumber, secondNumber);
		printf("%f\n", operatedNumber);
		}

		else if (operation == 2){
		printf("Enter two numbers to divide\n");
		printf("Pick First number\n");
		scanf("%f", &firstNumber);
		printf("Pick Second number\n");
		scanf("%f", &secondNumber);
		operatedNumber = divide(firstNumber, secondNumber);
		printf("%f\n", operatedNumber);
		}

		else if (operation == 3){
		printf("Enter two numbers to add\n");
		printf("Pick First number\n");
		scanf("%f", &firstNumber);
		printf("Pick Second number\n");
		scanf("%f", &secondNumber);
		operatedNumber = add(firstNumber, secondNumber);
		printf("%f\n", operatedNumber);
		}

		else if (operation == 4){
		printf("Enter two numbers to subtract\n");
		printf("Pick First number\n");
		scanf("%f", &firstNumber);
		printf("Pick Second number\n");
		scanf("%f", &secondNumber);
		operatedNumber = subtract(firstNumber, secondNumber);
		printf("%f\n", operatedNumber);
		}

		else
		{
		printf("Invalid input");
		}

		printf("Choose an operation\n");
		printf("Enter 0 to exit Program\n Enter 1 to multiply\n Enter 2 to divide\n Enter 3 to add\n Enter 4 to Subtract:\n");
		scanf("%d", &operation);
	}

	printf("You have closed the calculator, goodbye! \n");
	return 0;
}