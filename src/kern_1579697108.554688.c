#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 570, 790, "zeros");
	double **C = create_two_dim_double(120, 690, "zeros");
	double ***B = create_three_dim_double(320, 650, 590, "zeros");
	double *D = create_one_dim_double(510, "zeros");

	for (int d = 0; d < 686; d++)
	  for (int c = 0; c < 116; c++)
	    for (int b = 0; b < 116; b++)
	      for (int a = 0; a < 116; a++)
	      {
	        
	       D[a]=B[a][b][c]+C[a][b];
	       D[a+5]=A[a][b][c];
	        
	       C[a][b]=0.446;
	       C[a+4][b+4]=0.473;
	      }

    return 0;
}