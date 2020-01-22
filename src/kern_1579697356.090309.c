#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(490, 490, 460, "zeros");
	int ***B = create_three_dim_int(710, 770, 460, "zeros");
	int *C = create_one_dim_int(610, "zeros");
	int ***D = create_three_dim_int(830, 70, 380, "zeros");

	for (int a = 4; a < 490; a++)
	{
	  
	    D[a][a][a]=D[a-3][a-3][a-3]/C[a]-A[a][a][a];
	  
	    A[a][a][a]=D[a][a][a]+B[a][a][a]*38;
	    A[a-1][a-4][a-4]=C[a]*B[a][a][a];
	  
	    D[a][a][a]=C[a]*B[a][a][a];
	    B[a][a][a]=C[a+2]-A[a][a][a]/D[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]-A[a][a][a]*8;
	    C[a]=B[a-1][a-4][a]*C[a]+A[a][a][a];
	}

    return 0;
}