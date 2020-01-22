#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(530, 440, 250, "random");
	int *D = create_one_dim_int(120, "random");
	int **B = create_two_dim_int(760, 270, "random");
	int *C = create_one_dim_int(90, "random");

	for (int a = 5; a < 87; a++)
	{
	  
	    B[a][a]=B[a-1][a]-9;
	  
	    D[a]=D[a+1]*B[a][a];
	  
	    D[a]=10;
	  
	    int var_a=B[a][a]+4;
	    int var_b=B[a-5][a-2]/42;
	  
	    B[a][a]=C[a]*D[a]+A[a][a][a]/A[a][a][a];
	    A[a][a][a]=C[a+3]/B[a][a];
	}

    return 0;
}