#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(350, "zeros");
	int *B = create_one_dim_int(340, "zeros");
	int **D = create_two_dim_int(430, 290, "zeros");
	int *A = create_one_dim_int(420, "zeros");
	int ***C = create_three_dim_int(310, 160, 700, "zeros");

	for (int a = 0; a < 338; a++)
	{
	  
	    B[a]=B[a+2]+8;
	  
	    D[a][a]=D[a+4][a+4]-B[a]*A[a];
	  
	    int var_a=A[a]/23;
	    int var_b=A[a+5]/2;
	}

    return 0;
}