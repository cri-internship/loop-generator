#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 410, "zeros");
	int **A = create_two_dim_int(400, 470, "zeros");

	for (int a = 5; a < 156; a++)
	{
	  
	    B[a][a]=B[a-5][a-5]/A[a][a];
	  
	    B[a][a]=B[a-3][a-5]*A[a][a];
	  
	    A[a][a]=49;
	    A[a+4][a]=B[a][a];
	  
	    A[a][a]=B[a][a]*A[a][a];
	    B[a][a]=B[a-4][a-1]+A[a][a];
	  
	    int var_a=B[a][a]/11;
	    int var_b=B[a+4][a+4]+41;
	  
	    B[a][a]=A[a][a]-B[a][a];
	    A[a][a]=A[a-4][a-4]/B[a][a];
	}

    return 0;
}