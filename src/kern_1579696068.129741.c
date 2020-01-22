#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(800, 690, "ones");
	int *A = create_one_dim_int(590, "ones");
	int **D = create_two_dim_int(440, 680, "ones");
	int ***E = create_three_dim_int(600, 40, 690, "ones");
	int *C = create_one_dim_int(600, "ones");

	for (int a = 4; a < 435; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]*39;
	  
	    D[a][a]=D[a+1][a+5]-A[a]/E[a][a][a]*B[a][a]+C[a];
	  
	    B[a][a]=B[a+4][a+3]*D[a][a]+C[a]-33;
	  
	    int var_a=B[a][a]*0;
	    B[a][a]=40;
	  
	    A[a]=5;
	    A[a+2]=38;
	}

    return 0;
}