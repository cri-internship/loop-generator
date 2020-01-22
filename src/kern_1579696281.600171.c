#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(260, 440, 120, "zeros");
	double *A = create_one_dim_double(630, "zeros");

	for (int d = 3; d < 115; d++)
	  for (int c = 3; c < 436; c++)
	    for (int b = 2; b < 255; b++)
	      for (int a = 2; a < 255; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+2][c+2]/0.163;
	        
	       A[a]=A[a+5]/B[a][b][c];
	        
	       A[a]=A[a+3]+0.599;
	        
	       B[a][b][c]=A[a];
	      }

    return 0;
}