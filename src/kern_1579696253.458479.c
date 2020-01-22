#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(230, 260, 680, "zeros");
	double ***B = create_three_dim_double(980, 430, 120, "zeros");
	double *A = create_one_dim_double(100, "zeros");

	for (int b = 2; b < 100; b++)
	  for (int a = 2; a < 100; a++)
	  {
	    
	     B[a][b][a]=A[a]+0.402/C[a][b][a];
	     C[a][b][a]=A[a-2]*0.473;
	  }

    return 0;
}