#include <stdlib.h>
#include <stdio.h>


int main(){
	//Allows you to generate random number
	srand(time(NULL));

	// Allows user to specify the original array size, stored in variable n1.
	printf("Enter original array size:");
	int n1=0;
	scanf("%d",&n1);

	//Createstatus	//User specifies the new array size, stored in variable n2.
	printf("\nEnter new array size: ");
	int n2=0;
	scanf("%d",&n2);

	//Dynamically change the array to size n2
	 /* Fill in*/
    a1 = (int*)realloc(a1,n2*sizeof(int));

	//If the new array is a larger size, set all new members to 0. Reason: dont want to use uninitialized variables.

	/*
	Fill
	In
	*/
    if(n2>n1){
            for(i=0;i<n2;i++){
                a1[i]=0;
            }
        }
	

	for(i=0; i<n2;i++){
		//Print each element out (to make sure things look right)
        printf("%d ",/* Fill in */ a1[i]=0;);
	}
	printf("\n");
	
	//Done with array now, done with program :D
	
	return 0;
}
