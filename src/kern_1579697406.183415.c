#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(790, 100, 120, "ones");
	double *A = create_one_dim_double(510, "ones");

	for (int d = 4; d < 506; d++)
	  for (int c = 4; c < 506; c++)
	    for (int b = 4; b < 506; b++)
	      for (int a = 4; a < 506; a++)
	      {
	        
	       A[a]=0.967;
	       A[a+4]=0.633;
	        
	       double var_a=A[a]-0.231;
	       double var_b=A[a-4]-0.202;
	        
	       B[a][b][c]=A[a]/B[a][b][c];
	       A[a]=A[a+1]-B[a][b][c];
	      }

    return 0;
}