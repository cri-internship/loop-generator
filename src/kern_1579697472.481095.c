#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "zeros");
	int *B = create_one_dim_int(980, "zeros");
	int ***D = create_three_dim_int(960, 370, 40, "zeros");
	int **C = create_two_dim_int(510, 760, "zeros");

	for (int a = 5; a < 505; a++)
	{
	  
	    C[a][a]=C[a+5][a+2]/15;
	  
	    B[a]=D[a][a][a];
	    B[a-1]=C[a][a]*A[a]/D[a][a][a];
	  
	    A[a]=D[a][a][a]*B[a]+A[a];
	    B[a]=D[a+1][a+4][a+4]*C[a][a]+B[a]-A[a];
	  
	    C[a][a]=C[a][a]-B[a]+A[a]/D[a][a][a];
	    D[a][a][a]=C[a-5][a]-41;
	}

    return 0;
}