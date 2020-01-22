#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(920, "zeros");
	double *C = create_one_dim_double(510, "zeros");
	double **A = create_two_dim_double(770, 240, "zeros");
	double ***B = create_three_dim_double(980, 120, 390, "zeros");
	double **D = create_two_dim_double(380, 510, "zeros");

	for (int d = 0; d < 388; d++)
	  for (int c = 0; c < 116; c++)
	    for (int b = 0; b < 978; b++)
	      for (int a = 0; a < 978; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+4][c+2]-D[a][b]*C[a]/A[a][b]+E[a];
	      }

    return 0;
}