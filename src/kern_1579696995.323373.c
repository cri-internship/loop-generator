#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(190, 660, 880, "ones");
	double *B = create_one_dim_double(800, "ones");

	for (int b = 0; b < 660; b++)
	  for (int a = 0; a < 190; a++)
	  {
	    
	     B[a]=A[a][b][a]/0.981;
	     A[a][b][a]=B[a];
	    
	     B[a]=B[a+1]+A[a][b][a];
	  }

    return 0;
}