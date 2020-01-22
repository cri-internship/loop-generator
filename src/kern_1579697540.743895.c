#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 290, 390, "zeros");
	int *C = create_one_dim_int(900, "zeros");
	int *B = create_one_dim_int(750, "zeros");

	for (int a = 5; a < 750; a++)
	{
	  
	    C[a]=C[a-4]/A[a][a][a];
	  
	    C[a]=C[a+5]+B[a]/A[a][a][a];
	  
	    B[a]=33;
	    B[a-3]=14;
	  
	    A[a][a][a]=C[a];
	    A[a][a+5][a]=B[a];
	  
	    C[a]=A[a][a][a]*B[a]/C[a];
	    B[a]=A[a-4][a-5][a-3]*C[a]+B[a];
	  
	    int var_a=A[a][a][a]/27;
	    int var_b=A[a+3][a+1][a+2]*32;
	  
	    A[a][a][a]=A[a][a][a]-B[a];
	    C[a]=A[a-5][a-2][a-4]/C[a];
	}

    return 0;
}