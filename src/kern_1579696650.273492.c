#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(100, 990, 220, "zeros");
	int *D = create_one_dim_int(260, "zeros");
	int *B = create_one_dim_int(830, "zeros");
	int *E = create_one_dim_int(500, "zeros");
	int **A = create_two_dim_int(50, 180, "zeros");

	for (int b = 4; b < 258; b++)
	  for (int a = 4; a < 258; a++)
	  {
	    
	     D[a]=D[a-4]+15;
	    
	     D[a]=D[a+2]+B[a]/C[a][b][a];
	    
	     B[a]=D[a]/E[a];
	     B[a+4]=A[a][b];
	  }

    return 0;
}