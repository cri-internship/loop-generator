#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(300, 550, "zeros");
	int **C = create_two_dim_int(70, 580, "zeros");
	int *E = create_one_dim_int(1000, "zeros");
	int ***D = create_three_dim_int(440, 440, 390, "zeros");
	int **A = create_two_dim_int(200, 500, "zeros");

	for (int a = 4; a < 66; a++)
	{
	  
	    D[a][a][a]=D[a][a-4][a-1]/36*B[a][a]-E[a]+C[a][a];
	  
	    C[a][a]=C[a+2][a+4]/D[a][a][a];
	  
	    int var_a=C[a][a]*14;
	    int var_b=C[a+3][a+2]-49;
	  
	    D[a][a][a]=B[a][a]*27/A[a][a];
	    C[a][a]=B[a][a]*C[a][a]/34;
	  
	    int var_c=A[a][a]*16;
	    int var_d=A[a+4][a+3]+17;
	}

    return 0;
}