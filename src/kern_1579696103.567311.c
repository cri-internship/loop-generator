#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(900, 400, 310, "zeros");
	int *A = create_one_dim_int(280, "zeros");
	int ***B = create_three_dim_int(220, 970, 580, "zeros");

	for (int a = 4; a < 215; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-2][a-3]/C[a][a][a];
	  
	    B[a][a][a]=B[a][a+5][a]/36;
	  
	    C[a][a][a]=A[a]-B[a][a][a];
	    A[a]=B[a][a][a]/C[a][a][a];
	  
	    C[a][a][a]=C[a][a+3][a+2]/B[a][a][a]+21;
	  
	    A[a]=C[a][a][a]/B[a][a][a];
	  
	    int var_a=B[a][a][a]/26;
	    int var_b=B[a-4][a-2][a-1]/33;
	}

    return 0;
}