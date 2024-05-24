#include<stdio.h>
#include<string.h>
struct company{
	char companyname[50] ;
	int price ;
	int processer;
	
};

void main(){
	
	
	int n;
	printf("number of laptop:");
	scanf("%d",&n);
	
	struct company s1[n];
	
	
	int i;
	for(i=0;i< n;i++){
		
    fflush(stdin);
    printf("company name :");
    gets(s1[i].companyname);
    
    printf("processer :");
    scanf("%d",s1[i].processer);
    
    printf("price :");
    scanf("%d",s1[i].price);
    
   
	}

	
}

