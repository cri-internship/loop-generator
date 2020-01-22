#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(530, "ones");
	int ***D = create_three_dim_int(350, 930, 1000, "ones");
	int **C = create_two_dim_int(130, 870, "ones");
	int ***B = create_three_dim_int(380, 160, 260, "ones");

	for (int a = 5; a < 127; a++)
	{
	  
	    C[a][a]=C[a+3][a]+40;
	  
	    C[a][a]=30;
	  
	    A[a]=B[a][a][a]/C[a][a];
	    A[a+2]=D[a][a][a]-B[a][a][a];
	  
	    B[a][a][a]=A[a]/D[a][a][a]-A[a];
	    B[a+3][a+5][a+3]=D[a][a][a]+48/C[a][a];
	  
	    B[a][a][a]=4;
	}

    return 0;
}