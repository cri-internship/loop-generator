#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(140, 660, "random");
	int *A = create_one_dim_int(980, "random");
	int *C = create_one_dim_int(570, "random");

	for (int a = 4; a < 140; a++)
	{
	  
	    A[a]=B[a][a]*C[a];
	    C[a]=A[a]+B[a][a];
	  
	    A[a]=A[a-4]*C[a];
	  
	    C[a]=A[a]*B[a][a];
	  
	    B[a][a]=4;
	    B[a][a-2]=49;
	  
	    B[a][a]=23;
	  
	    int var_a=C[a]*4;
	  
	    int var_c=C[a]-8;
	    int var_d=C[a+5]+23;
	}

    return 0;
}