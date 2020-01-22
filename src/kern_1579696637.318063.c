#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(410, 620, 260, "zeros");
	double *A = create_one_dim_double(690, "zeros");

	for (int d = 4; d < 258; d++)
	  for (int c = 2; c < 616; c++)
	    for (int b = 4; b < 407; b++)
	      for (int a = 4; a < 407; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c-3]/0.191;
	        
	       A[a]=A[a-4]*0.294;
	        
	       A[a]=0.05;
	        
	       B[a][b][c]=0.427;
	        
	       A[a]=A[a]-B[a][b][c];
	       B[a][b][c]=A[a]/B[a][b][c];
	        
	       A[a]=B[a][b][c]*A[a];
	       B[a][b][c]=B[a][b-2][c-4]*A[a];
	      }

    return 0;
}