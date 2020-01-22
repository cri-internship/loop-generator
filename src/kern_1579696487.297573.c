#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(420, 50, 790, "ones");
	double **B = create_two_dim_double(40, 820, "ones");

	for (int b = 4; b < 50; b++)
	  for (int a = 1; a < 420; a++)
	  {
	    
	     A[a][b][a]=A[a][b-4][a-1]*B[a][b];
	  }

    return 0;
}