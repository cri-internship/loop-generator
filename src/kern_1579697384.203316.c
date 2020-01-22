#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(840, "random");
	double ***A = create_three_dim_double(760, 980, 940, "random");

	for (int c = 0; c < 937; c++)
	  for (int b = 0; b < 977; b++)
	    for (int a = 3; a < 756; a++)
	    {
	      
	      B[a]=0.12;
	      float  var_a=B[a]*0.421;
	      
	      B[a]=B[a-3]/0.24;
	      
	      B[a]=B[a+1]+A[a][b][c];
	      
	      A[a][b][c]=A[a][b][c]/0.683;
	      B[a]=A[a+4][b+3][c+3]/B[a];
	    }

    return 0;
}