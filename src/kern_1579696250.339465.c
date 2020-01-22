#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(90, 320, 570, "zeros");
	double *C = create_one_dim_double(450, "zeros");
	double **A = create_two_dim_double(290, 400, "zeros");

	for (int d = 0; d < 569; d++)
	  for (int c = 0; c < 319; c++)
	    for (int b = 3; b < 85; b++)
	      for (int a = 3; a < 85; a++)
	      {
	        
	       C[a]=C[a-3]+0.111;
	        
	       A[a][b]=A[a+4][b+5]/0.847;
	        
	       B[a][b][c]=B[a+5][b+1][c+1]-0.223;
	        
	       double var_a=A[a][b]-0.198;
	       double var_b=A[a+5][b+2]*0.78;
	        
	       double var_c=A[a][b]-0.37;
	      }

    return 0;
}