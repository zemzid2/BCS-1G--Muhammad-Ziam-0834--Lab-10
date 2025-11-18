#include<stdio.h>
#include<string.h>
int main(){
	char email[100];
	char *atPos;
	
	printf("Enter email address : ");
	fgets(email, sizeof(email),stdin);
	
	email[strcspn(email,"\n")]='\0';
	
	atPos= strchr(email,'@');
	
	if (atPos==NULL||atPos==email || *(atPos+1)=='\0'){
		printf("Domain: invalid email\n");
	}
	else
	{
		printf("Domain : %s", atPos+1);
	}
	return 0;
}