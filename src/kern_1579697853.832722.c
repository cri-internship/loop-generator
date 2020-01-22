#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(500, 540, "zeros");
	double **A = create_two_dim_double(530, 930, "zeros");
	double ***C = create_three_dim_double(160, 550, 720, "zeros");

	for (int b = 0; b < 547; b++)
	  for (int a = 0; a < 157; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b+3][a+2]-B[a][b]+A[a][b];
	    
	     A[a][b]=0.608;
	     A[a+3][b+1]=0.251;
	  }

    return 0;
}