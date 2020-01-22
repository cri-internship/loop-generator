#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(640, 990, 580, "zeros");
	double ***B = create_three_dim_double(970, 480, 170, "zeros");
	double *A = create_one_dim_double(510, "zeros");

	for (int b = 0; b < 480; b++)
	  for (int a = 0; a < 638; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b][a+4]-A[a]*C[a][b][a];
	    
	     C[a][b][a]=C[a+1][b+1][a+2]*0.278-B[a][b][a];
	  }

    return 0;
}