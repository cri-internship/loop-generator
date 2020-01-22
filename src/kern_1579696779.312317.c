#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(360, 90, 400, "ones");
	double *A = create_one_dim_double(700, "ones");

	for (int c = 0; c < 696; c++)
	  for (int b = 0; b < 696; b++)
	    for (int a = 0; a < 696; a++)
	    {
	      
	      A[a]=0.323;
	      float  var_a=A[a]-0.193;
	      
	      A[a]=A[a+4]*0.573;
	      
	      A[a]=A[a]-B[a][b][c];
	      B[a][b][c]=A[a+1]-B[a][b][c];
	    }

    return 0;
}