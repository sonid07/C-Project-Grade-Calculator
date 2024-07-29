#include<stdio.h>
int main(){
	int acct,stat,eco,ocm,spcc,eng,total,per; 
	printf("Enter marks of 6 subjects:\n");
	printf("Enter marks of Accounts:");
	scanf("%d",&acct);
	printf("Enter marks of Statistics:");
	scanf("%d",&stat);
	printf("Enter marks of Economics:");
	scanf("%d",&eco);
	printf("Enter marks of OCM:");
	scanf("%d",&ocm);
	printf("Enter marks of SPCC:");
	scanf("%d",&spcc);
	printf("Enter marks of English:");
	scanf("%d",&eng);
//  --------------TOTAL---------------
	total=acct+stat+eco+ocm+spcc+eng;
	printf("Total marks=%d\n",total);
//	------------PERCENTAGE-----------
	per=total/6;
	printf("Percentage:%d\n",per);
//	------NESTED AND LADDER IF------
	if (per>=39){
		if(per>=80){
			printf("Grade A\n");
			printf("Congrulations! You achieved A grade\n");
		}
		else if(per>=70){
			printf("Grade B\n");
			printf("Congrulations! You achieved B grade..But can do better\n");
		}
		else{
			printf("Grade C\n");
			printf("You achieved C grade..But need to do hardwork\n");
		}
	}
	else{
		printf("Falied!");
		printf("Needs to be focused on your studies");
	}
}
