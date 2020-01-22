#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(20, 770, "random");
	int *A = create_one_dim_int(120, "random");

	for (int a = 4; a < 15; a++)
	{
	  
	    B[a][a]=B[a-1][a-1]*A[a];
	  
	    A[a]=17;
	    float  var_a=A[a]-1;
	  
	    A[a]=A[a-4]+B[a][a];
	  
	    B[a][a]=B[a][a]-11;
	    A[a]=B[a+5][a]-A[a];
	}

    return 0;
}