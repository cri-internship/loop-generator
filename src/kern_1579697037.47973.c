#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(160, "ones");
	int **A = create_two_dim_int(190, 970, "ones");
	int **D = create_two_dim_int(710, 620, "ones");
	int **B = create_two_dim_int(450, 160, "ones");

	for (int a = 4; a < 155; a++)
	{
	  
	    C[a]=20;
	    C[a]=C[a]*27-B[a][a];
	  
	    D[a][a]=D[a-4][a-1]-C[a]/43*C[a];
	  
	    A[a][a]=A[a+1][a]/15;
	  
	    A[a][a]=25;
	  
	    B[a][a]=22-D[a][a];
	    B[a+2][a+5]=C[a]-D[a][a];
	}

    return 0;
}