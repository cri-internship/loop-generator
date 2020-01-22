#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(290, "random");
	int ***B = create_three_dim_int(650, 450, 440, "random");
	int ***D = create_three_dim_int(690, 920, 70, "random");
	int *C = create_one_dim_int(910, "random");

	for (int a = 4; a < 290; a++)
	{
	  
	    A[a]=A[a-3]/46;
	  
	    C[a]=C[a-4]+50;
	  
	    B[a][a][a]=A[a]-D[a][a][a];
	    B[a+4][a][a+1]=A[a];
	  
	    B[a][a][a]=A[a];
	  
	    int var_a=C[a]*23;
	    int var_b=C[a]+23;
	  
	    B[a][a][a]=C[a]-B[a][a][a]*D[a][a][a]+B[a][a][a];
	}

    return 0;
}