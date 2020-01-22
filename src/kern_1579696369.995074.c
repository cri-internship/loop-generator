#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(190, "zeros");
	double *C = create_one_dim_double(390, "zeros");
	double *A = create_one_dim_double(800, "zeros");
	double ***B = create_three_dim_double(440, 50, 850, "zeros");
	double **E = create_two_dim_double(40, 890, "zeros");

	for (int d = 0; d < 847; d++)
	  for (int c = 0; c < 47; c++)
	    for (int b = 0; b < 438; b++)
	      for (int a = 0; a < 438; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+3][c+3]-E[a][b]/A[a];
	      }

    return 0;
}