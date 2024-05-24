#include<stdio.h>


main (){
    int guj,ss,eng,sp,ac,sum; 		
	
	printf("enter your guj : ");
	scanf("%d",&guj);
	printf("enter your ss : ");
	scanf("%d",&ss);
	printf("enter your eng : ");
	scanf("%d",&eng);
	printf("enter your sp: ");
	scanf("%d",&sp);
	printf("enter your ac : ");
	scanf("%d",&ac);
	
	sum=guj+ss+eng+sp+ac;
	
	printf("total: %d ",sum);
	
	
    
    int avg=sum*100/500;
    
    printf("\navg: %d",avg);
    
		
	
}
