#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(740, "random");
	int ***B = create_three_dim_int(300, 150, 220, "random");

	for (int a = 2; a < 300; a++)
	{
	  
	    A[a]=A[a]-33;
	    A[a]=43;
	  
	    A[a]=A[a+2]+46;
	  
	    B[a][a][a]=B[a][a][a]*A[a];
	    B[a][a][a]=B[a][a][a]+A[a];
	  
	    int var_a=A[a]*27;
	    int var_b=A[a-2]-41;
	}

    return 0;
}