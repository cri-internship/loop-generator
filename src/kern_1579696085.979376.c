#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(510, 30, "zeros");
	int ***E = create_three_dim_int(860, 120, 570, "zeros");
	int ***C = create_three_dim_int(860, 740, 900, "zeros");
	int *D = create_one_dim_int(480, "zeros");
	int *A = create_one_dim_int(160, "zeros");

	for (int a = 4; a < 479; a++)
	{
	  
	    D[a]=D[a+1]+39;
	  
	    B[a][a]=B[a+2][a]+29;
	  
	    B[a][a]=A[a];
	  
	    E[a][a][a]=B[a][a];
	    E[a-4][a][a-3]=C[a][a][a]+A[a]*B[a][a];
	  
	    B[a][a]=C[a][a][a]*D[a]/B[a][a]+E[a][a][a];
	    D[a]=C[a-3][a][a-2]+A[a]/E[a][a][a];
	  
	    int var_a=B[a][a]+18;
	    int var_b=B[a+4][a+2]-20;
	}

    return 0;
}