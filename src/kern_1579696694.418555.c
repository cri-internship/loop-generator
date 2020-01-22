#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(540, 490, "random");
	double **C = create_two_dim_double(450, 560, "random");
	double *A = create_one_dim_double(480, "random");
	double **B = create_two_dim_double(960, 450, "random");

	for (int d = 5; d < 448; d++)
	  for (int c = 3; c < 446; c++)
	    for (int b = 3; b < 446; b++)
	      for (int a = 3; a < 446; a++)
	      {
	        
	       C[a][b]=C[a-3][b-5]+0.68*D[a][b];
	        
	       C[a][b]=C[a+4][b+2]*0.807/A[a];
	        
	       B[a][b]=B[a+5][b+2]+C[a][b];
	        
	       C[a][b]=C[a+3][b+2]-0.78;
	        
	       D[a][b]=D[a+1][b+5]/C[a][b]-A[a];
	      }

    return 0;
}