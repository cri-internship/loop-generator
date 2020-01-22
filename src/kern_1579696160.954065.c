#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 540, 430, "random");
	int *A = create_one_dim_int(210, "random");

	for (int a = 5; a < 205; a++)
	{
	  
	    A[a]=A[a+3]-20;
	  
	    A[a]=B[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+4][a+4]-2;
	  
	    A[a]=A[a+1]/43;
	  
	    int var_a=B[a][a][a]/23;
	    int var_b=B[a-5][a-4][a-1]/21;
	}

    return 0;
}