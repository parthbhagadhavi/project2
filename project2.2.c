#include<stdio.h>
main()
{
	int p;
	int ansa;
	int ansb;
	int ansc;
	int ansd;
	int final1;
		int final2;
		int final3;
		int final4;
	printf("my name is soya parth \n");
	printf("i am study for full stack development in amreli\n");
	printf("write a program to input electricity unit charges and calculate the total electricity bill according to the given condition:\n");
	
	printf("enter the electricity unit\n");
	scanf("%d",&p);
	printf("unit is %d\n",p);

	if(p>=0&&p<=50){
	
	ansa=(p*0.50)*0.20;
	final1=ansa+(p*0.50);
	printf("for the first 50 unit calculate by 0.50 \n%d\n",final1);	
		
	}
	else if(p>=51&&p<=150){

	ansb= (50*0.50 + (p-50)*0.75)*0.20;
	final2=ansb+(50*0.50 + (p-50)*0.75);
	printf("for the next 100 unit calculate by 0.75 \n%d\n",ansb);
	}

	else if(p>=151&&p<=250){
	ansc=(50*0.50+(p-100)*0.75+(p-150)*1.20)*0.20;
	final3=ansc+(50*0.50+(p-100)*0.75+(p-150)*1.20);
	printf("for the next 100 unit calculate by 1.20\n%d\n",ansc);
	}
	else if(p>=251){
	ansd=(50*0.50+(p-100)*0.75+(p-150)*1.20+(p-250)*1.50)*0.20;
	final4=ansd+(50*0.50+(p-100)*0.75+(p-150)*1.20+(p-250)*1.50);
	printf("for the next unit calculate by 1.50\n%d\n",ansd);
}
		
		

	
	
	
	
	
	
	
	
	
	printf("...the end...");
}