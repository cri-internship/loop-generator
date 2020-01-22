#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(630, "ones");
	double ***C = create_three_dim_double(780, 250, 640, "ones");
	double **B = create_two_dim_double(420, 980, "ones");
	double **D = create_two_dim_double(860, 250, "ones");

	for (int d = 5; d < 980; d++)
	  for (int c = 2; c < 420; c++)
	    for (int b = 2; b < 420; b++)
	      for (int a = 2; a < 420; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]-0.686;
	        
	       A[a]=A[a+4]*0.5;
	        
	       A[a]=A[a+2]+B[a][b]*D[a][b]/C[a][b][c];
	      }

    return 0;
}