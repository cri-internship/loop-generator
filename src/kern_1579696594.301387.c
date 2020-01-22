#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(340, 470, 110, "random");
	float *A = create_one_dim_float(730, "random");

	for (int c = 5; c < 730; c++)
	  for (int b = 5; b < 730; b++)
	    for (int a = 5; a < 730; a++)
	    {
	      
	      A[a]=0.409;
	      float  var_a=A[a]/0.01;
	      
	      A[a]=A[a-2]+B[a][b][c];
	      
	      A[a]=A[a]-0.885;
	    }

    return 0;
}