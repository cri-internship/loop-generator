#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(210, "ones");
	int ***C = create_three_dim_int(790, 690, 360, "ones");
	int *D = create_one_dim_int(120, "ones");
	int ***B = create_three_dim_int(60, 230, 690, "ones");

	for (int a = 5; a < 57; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-5][a-4]-19;
	  
	    B[a][a][a]=B[a][a+3][a]-A[a];
	  
	    B[a][a][a]=B[a][a][a]-C[a][a][a]+D[a];
	    D[a]=B[a-2][a-1][a]*D[a]-C[a][a][a];
	}

    return 0;
}