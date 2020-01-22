#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(740, "zeros");
	float ***C = create_three_dim_float(660, 600, 600, "zeros");
	float **B = create_two_dim_float(340, 90, "zeros");

	for (int d = 0; d < 595; d++)
	  for (int c = 3; c < 90; c++)
	    for (int b = 5; b < 340; b++)
	      for (int a = 5; a < 340; a++)
	      {
	        
	       B[a][b]=B[a-5][b-3]/0.066;
	        
	       C[a][b][c]=C[a][b+5][c]-B[a][b]*A[a];
	        
	       C[a][b][c]=A[a]+C[a][b][c]*C[a][b][c];
	       A[a]=C[a][b][c]-B[a][b];
	      }

    return 0;
}