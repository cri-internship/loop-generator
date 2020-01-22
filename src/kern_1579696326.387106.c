#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(130, "zeros");
	int ***E = create_three_dim_int(710, 490, 720, "zeros");
	int **C = create_two_dim_int(290, 700, "zeros");
	int **B = create_two_dim_int(450, 860, "zeros");
	int *D = create_one_dim_int(270, "zeros");

	for (int c = 0; c < 860; c++)
	  for (int b = 1; b < 130; b++)
	    for (int a = 1; a < 130; a++)
	    {
	      
	      int var_a=B[a][b]*11;
	      int var_b=B[a-1][b]/11;
	      
	      int var_c=A[a]*41;
	      int var_d=A[a]/45;
	    }

    return 0;
}