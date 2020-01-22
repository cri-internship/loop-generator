#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(250, 400, 520, "zeros");
	int ***D = create_three_dim_int(760, 110, 750, "zeros");
	int ***A = create_three_dim_int(560, 750, 580, "zeros");
	int *E = create_one_dim_int(60, "zeros");
	int ***B = create_three_dim_int(500, 820, 170, "zeros");

	for (int a = 3; a < 55; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-1][a-3]-2;
	  
	    E[a]=E[a+5]+A[a][a][a]*C[a][a][a]/D[a][a][a]-B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a][a+2]+E[a];
	}

    return 0;
}