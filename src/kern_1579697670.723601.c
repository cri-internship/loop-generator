#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 970, 700, "ones");
	double *B = create_one_dim_double(370, "ones");

	for (int c = 5; c < 700; c++)
	  for (int b = 3; b < 970; b++)
	    for (int a = 4; a < 365; a++)
	    {
	      
	      B[a]=B[a-4]+0.901;
	      
	      float  var_a=B[a]-0.847;
	      
	      B[a]=B[a+1]/0.787;
	      
	      double var_b=B[a]/0.322;
	      B[a]=0.883;
	      
	      A[a][b][c]=0.098;
	      A[a][b-3][c-5]=0.77;
	    }

    return 0;
}