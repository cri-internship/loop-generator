#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(60, "zeros");
	double ***A = create_three_dim_double(220, 340, 190, "zeros");

	for (int b = 0; b < 336; b++)
	  for (int a = 4; a < 215; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b][a]/0.235;
	    
	     A[a][b][a]=A[a+1][b+1][a]+B[a];
	  }

    return 0;
}