#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(570, 600, "zeros");
	float ***C = create_three_dim_float(240, 200, 760, "zeros");
	float ***A = create_three_dim_float(260, 680, 290, "zeros");

	for (int a = 5; a < 240; a++)
	{
	  
	    B[a][a]=B[a-3][a-3]/0.392;
	  
	    B[a][a]=B[a+5][a+4]-0.811*A[a][a][a];
	  
	    A[a][a][a]=A[a][a+2][a+4]/0.636;
	  
	    A[a][a][a]=B[a][a];
	  
	    A[a][a][a]=C[a][a][a]-A[a][a][a];
	    B[a][a]=C[a-5][a-4][a-4]*B[a][a]+A[a][a][a];
	}

    return 0;
}