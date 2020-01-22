#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(30, "zeros");
	double ***B = create_three_dim_double(730, 700, 800, "zeros");
	double *D = create_one_dim_double(80, "zeros");
	double ***A = create_three_dim_double(310, 400, 30, "zeros");

	for (int b = 1; b < 400; b++)
	  for (int a = 5; a < 25; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-1][a-2]/0.317;
	    
	     C[a]=C[a+5]/0.406;
	    
	     C[a]=C[a]-B[a][b][a];
	     A[a][b][a]=C[a-5]+D[a]/A[a][b][a]-D[a];
	  }

    return 0;
}