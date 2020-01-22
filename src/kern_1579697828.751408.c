#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 650, "zeros");
	double *B = create_one_dim_double(530, "zeros");

	for (int d = 0; d < 646; d++)
	  for (int c = 0; c < 530; c++)
	    for (int b = 0; b < 530; b++)
	      for (int a = 0; a < 530; a++)
	      {
	        
	       A[a][b]=A[a+2][b+4]/0.748;
	        
	       double var_a=B[a]/0.817;
	       B[a]=0.459;
	        
	       A[a][b]=A[a][b+2]+0.997;
	      }

    return 0;
}