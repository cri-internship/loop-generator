#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(900, 540, "ones");
	int ***C = create_three_dim_int(440, 130, 90, "ones");
	int **A = create_two_dim_int(240, 980, "ones");
	int *B = create_one_dim_int(800, "ones");

	for (int a = 4; a < 239; a++)
	{
	  
	    B[a]=B[a-4]*1;
	  
	    D[a][a]=D[a-4][a-3]*11;
	  
	    A[a][a]=A[a+1][a+1]*C[a][a][a];
	  
	    D[a][a]=D[a+3][a]*16;
	  
	    int var_a=D[a][a]/22;
	    int var_b=D[a][a-2]-33;
	}

    return 0;
}