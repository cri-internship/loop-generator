#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(160, 70, "random");
	int *B = create_one_dim_int(850, "random");
	int *A = create_one_dim_int(20, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    B[a]=B[a-1]+C[a][a];
	  
	    A[a]=A[a-5]/1;
	  
	    B[a]=B[a+5]/46;
	  
	    B[a]=B[a+1]+A[a]*A[a];
	  
	    A[a]=C[a][a]+B[a];
	  
	    C[a][a]=B[a]/A[a];
	    C[a][a+3]=A[a];
	  
	    C[a][a]=45;
	}

    return 0;
}