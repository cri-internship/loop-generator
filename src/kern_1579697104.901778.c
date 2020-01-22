#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(260, "ones");
	int **C = create_two_dim_int(480, 620, "ones");
	int **B = create_two_dim_int(1000, 610, "ones");

	for (int a = 5; a < 259; a++)
	{
	  
	    C[a][a]=C[a][a-4]/37;
	  
	    A[a]=A[a-5]*13;
	  
	    B[a][a]=B[a+4][a+1]/C[a][a]*A[a];
	  
	    A[a]=A[a+1]/B[a][a];
	}

    return 0;
}