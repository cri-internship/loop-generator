#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(540, "zeros");
	int **B = create_two_dim_int(600, 860, "zeros");
	int *C = create_one_dim_int(200, "zeros");
	int ***D = create_three_dim_int(750, 560, 720, "zeros");
	int ***E = create_three_dim_int(720, 160, 930, "zeros");

	for (int a = 4; a < 198; a++)
	{
	  
	    B[a][a]=B[a+4][a+4]/44;
	  
	    C[a]=19;
	    C[a+2]=42;
	  
	    int var_a=E[a][a][a]+14;
	    int var_b=E[a][a-3][a-4]-50;
	  
	    int var_c=B[a][a]/25;
	    int var_d=B[a-4][a-4]/18;
	}

    return 0;
}