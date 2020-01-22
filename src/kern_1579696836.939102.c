#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(840, 430, 20, "random");
	double *C = create_one_dim_double(330, "random");
	double **D = create_two_dim_double(920, 790, "random");
	double **B = create_two_dim_double(1000, 860, "random");

	for (int b = 2; b < 787; b++)
	  for (int a = 4; a < 330; a++)
	  {
	    
	     D[a][b]=0.6;
	     D[a-4][b-2]=0.007;
	    
	     double var_a=C[a]*0.537;
	     double var_b=C[a]+0.98;
	    
	     A[a][b][a]=D[a][b]-B[a][b]+C[a];
	     D[a][b]=D[a+3][b+3]-A[a][b][a]/C[a]*B[a][b];
	  }

    return 0;
}