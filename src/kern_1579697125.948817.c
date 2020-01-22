#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(120, 880, 830, "random");
	double *A = create_one_dim_double(190, "random");

	for (int d = 1; d < 829; d++)
	  for (int c = 2; c < 876; c++)
	    for (int b = 3; b < 116; b++)
	      for (int a = 3; a < 116; a++)
	      {
	        
	       A[a]=A[a-3]*0.528;
	        
	       B[a][b][c]=B[a-3][b-2][c-1]*A[a];
	        
	       A[a]=A[a+2]*B[a][b][c];
	        
	       B[a][b][c]=0.963;
	        
	       double var_a=A[a]*0.625;
	       double var_b=A[a]*0.627;
	      }

    return 0;
}