#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(270, "random");
	double ***B = create_three_dim_double(370, 610, 660, "random");

	for (int d = 3; d < 660; d++)
	  for (int c = 1; c < 609; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-1][c-3]-0.805;
	        
	       A[a]=A[a-1]+0.461;
	        
	       A[a]=A[a-2]/0.521;
	        
	       B[a][b][c]=0.8;
	      }

    return 0;
}