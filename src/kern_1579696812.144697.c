#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(660, "ones");
	int *C = create_one_dim_int(580, "ones");
	int **B = create_two_dim_int(720, 880, "ones");

	for (int a = 4; a < 578; a++)
	{
	  
	    A[a]=A[a+2]+18;
	  
	    C[a]=B[a][a]/A[a];
	    C[a-4]=B[a][a]*A[a];
	  
	    C[a]=8;
	  
	    A[a]=B[a][a]/C[a];
	    B[a][a]=B[a+5][a+2]+38;
	  
	    C[a]=A[a]-B[a][a]+C[a];
	  
	    int var_a=C[a]*50;
	    int var_b=C[a+2]*7;
	}

    return 0;
}