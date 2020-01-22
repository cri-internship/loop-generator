#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(450, "zeros");
	int ***C = create_three_dim_int(110, 700, 170, "zeros");
	int ***D = create_three_dim_int(470, 800, 690, "zeros");
	int ***E = create_three_dim_int(220, 620, 920, "zeros");
	int ***A = create_three_dim_int(360, 860, 30, "zeros");

	for (int a = 4; a < 355; a++)
	{
	  
	    B[a]=0;
	    float  var_a=B[a]/0;
	  
	    A[a][a][a]=A[a-4][a-3][a-1]-E[a][a][a]+C[a][a][a]*B[a]/D[a][a][a];
	  
	    D[a][a][a]=D[a+4][a][a+3]*35;
	  
	    B[a]=B[a+5]-A[a][a][a]*C[a][a][a]/D[a][a][a]+A[a][a][a];
	  
	    A[a][a][a]=A[a][a+5][a]-B[a]/D[a][a][a]+E[a][a][a]*C[a][a][a];
	}

    return 0;
}