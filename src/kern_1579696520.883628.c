#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(870, "zeros");
	double *C = create_one_dim_double(640, "zeros");
	double ***A = create_three_dim_double(890, 790, 260, "zeros");
	double *D = create_one_dim_double(120, "zeros");

	for (int b = 1; b < 785; b++)
	  for (int a = 5; a < 870; a++)
	  {
	    
	     C[a]=B[a]/0.898*C[a];
	     B[a]=A[a][b][a];
	    
	     A[a][b][a]=B[a];
	     A[a-5][b-1][a-4]=D[a]-B[a];
	    
	     A[a][b][a]=A[a][b][a]-B[a]+C[a]/D[a];
	     B[a]=A[a+3][b+5][a+2]/D[a]-B[a];
	  }

    return 0;
}