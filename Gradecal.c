#include<stdio.h>
int main(){
	int per;
	char grade;
	printf("Enter your Score:");
	scanf("%d",&per);
	grade=(per>=90)?'A':(per>=80)?'B':(per>=70)?'C':(per>=50)?'D':'F';
	printf("%c",grade);
	
	switch(grade){
		case 'A':
			printf("\tExcellent work");
			break;
			case 'B':
			printf("\tWell Done");
			break;
			case 'C':
			printf("\tGood job");
			break;
			case 'D':
			printf("\tYou passed, but you could do better");
			break;
			case 'F':
			printf("\tSorry, you failed");
			break;
			default:
			printf("\tInvalid");
			break;	
	}
	if(grade!='F'){
		printf("\t Congratulations! You are eligible for the next level");
	}
	else{
		printf("Please try again next time");
	}
}
