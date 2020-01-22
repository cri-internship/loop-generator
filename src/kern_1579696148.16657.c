#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(760, 330, "zeros");
	double ***A = create_three_dim_double(810, 860, 550, "zeros");

	for (int d = 1; d < 548; d++)
	  for (int c = 1; c < 325; c++)
	    for (int b = 5; b < 756; b++)
	      for (int a = 5; a < 756; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-1][c-1]-0.645;
	        
	       B[a][b]=B[a+4][b+5]*0.184;
	        
	       B[a][b]=0.854;
	        
	       B[a][b]=A[a][b][c]/0.492;
	       A[a][b][c]=A[a+5][b+2][c+2]-0.969;
	      }

    return 0;
}