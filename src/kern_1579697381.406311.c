#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(190, "zeros");
	double ***C = create_three_dim_double(140, 420, 410, "zeros");
	double *B = create_one_dim_double(740, "zeros");

	for (int d = 1; d < 410; d++)
	  for (int c = 0; c < 420; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b][c-1]+0.94;
	        
	       A[a]=C[a][b][c]+B[a];
	       A[a-5]=B[a]*C[a][b][c];
	      }

    return 0;
}