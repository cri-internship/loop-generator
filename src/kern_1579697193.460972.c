#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(820, "random");
	int *D = create_one_dim_int(110, "random");
	int **C = create_two_dim_int(790, 660, "random");
	int *B = create_one_dim_int(80, "random");

	for (int a = 0; a < 787; a++)
	{
	  
	    A[a]=A[a+1]*6;
	  
	    C[a][a]=C[a+3][a+1]+A[a]-D[a]*B[a];
	}

    return 0;
}