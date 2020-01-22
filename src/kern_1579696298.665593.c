#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(170, 880, "random");
	int ***B = create_three_dim_int(970, 590, 650, "random");
	int *A = create_one_dim_int(410, "random");

	for (int a = 0; a < 168; a++)
	{
	  
	    C[a][a]=C[a+2][a+2]/A[a]+B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a][a+4]/C[a][a]+A[a];
	  
	    B[a][a][a]=B[a+3][a+2][a+2]-6;
	}

    return 0;
}