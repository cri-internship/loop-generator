#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(840, 270, 180, "ones");
	double *A = create_one_dim_double(980, "ones");
	double *B = create_one_dim_double(620, "ones");

	for (int b = 0; b < 980; b++)
	  for (int a = 0; a < 980; a++)
	  {
	    
	     A[a]=0.238+B[a];
	     C[a][b][a]=A[a]-C[a][b][a];
	  }

    return 0;
}