#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(50, 740, 640, "random");
	int **A = create_two_dim_int(150, 200, "random");
	int *C = create_one_dim_int(320, "random");
	int *B = create_one_dim_int(810, "random");

	for (int a = 3; a < 47; a++)
	{
	  
	    B[a]=B[a-3]/A[a][a]*D[a][a][a];
	  
	    B[a]=B[a+3]+C[a]-A[a][a]*C[a];
	  
	    D[a][a][a]=B[a];
	    D[a][a+2][a+3]=19;
	  
	    A[a][a]=40;
	    A[a+4][a+1]=0;
	  
	    A[a][a]=D[a][a][a]/C[a];
	  
	    int var_a=B[a]/1;
	    int var_b=B[a-2]-29;
	}

    return 0;
}