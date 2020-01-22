#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(200, 970, 750, "ones");
	int ***B = create_three_dim_int(10, 180, 500, "ones");
	int **C = create_two_dim_int(140, 660, "ones");
	int *E = create_one_dim_int(470, "ones");
	int **A = create_two_dim_int(210, 690, "ones");

	for (int a = 4; a < 6; a++)
	{
	  
	    C[a][a]=C[a-2][a-3]-10;
	  
	    D[a][a][a]=D[a-1][a-2][a]+13;
	  
	    E[a]=B[a][a][a]-C[a][a];
	    D[a][a][a]=E[a]-A[a][a]+44/C[a][a]*B[a][a][a];
	  
	    A[a][a]=A[a][a+2]*21;
	  
	    B[a][a][a]=E[a]/D[a][a][a];
	    B[a+4][a+2][a+4]=C[a][a];
	  
	    int var_a=A[a][a]+41;
	    int var_b=A[a-4][a-1]/35;
	}

    return 0;
}