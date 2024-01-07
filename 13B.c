// Program for reading and writing the student marks data to files 

#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("13B.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		return 1;
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}