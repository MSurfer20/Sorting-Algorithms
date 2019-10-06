//Authour: Amar Gwari                               Date: 06/10/19                        Time: 16:31
#include <stdio.h>
int main() {
	long long int N,i=0,j=0,k,z;
	// user must input the length of the array to be sorted as well as input the elements of the array
	// input element number:-

	printf("Please enter the number of elements of array:-\n");
	scanf("%lld",&N);
	printf("\n");
	printf("Enter the elements of the array (each elemented space seperated)\n");

	long long int a[N];  //declaring the array

	//input elements of array (each element must be space separated)	
	for(i=0;i<N;i++)
	{
		scanf("%lld",&a[i]);
	}
	//now array is declared, Now comes the sorting part

	for(i=0;i<N;i++)
	{
		for(j=1;j<N;j++)	     
		{      
			if(a[j]<a[j-1])
			{       z = a[j-1];
				a[j-1] = a[j];
				a[j] = z;
			
			}
		}
	}
	// sorting is done now... Now the sorted rray shall be printed for the user ^o^

	printf("THE SORTED ARRAY IS!:-\n");
	for(i=0;i<N;i++)
	{
		printf("%lld ",a[i]);
	}
	printf("\n");
	return 0;
}
