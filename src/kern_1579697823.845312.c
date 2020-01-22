#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(390, 550, "zeros");
	double ***A = create_three_dim_double(250, 800, 320, "zeros");
	double *C = create_one_dim_double(590, "zeros");

	for (int d = 0; d < 315; d++)
	  for (int c = 2; c < 549; c++)
	    for (int b = 5; b < 245; b++)
	      for (int a = 5; a < 245; a++)
	      {
	        
	       B[a][b]=B[a-2][b-2]-0.81;
	        
	       A[a][b][c]=A[a+3][b+4][c+2]*0.15;
	        
	       A[a][b][c]=A[a+4][b+2][c+5]+0.211;
	        
	       A[a][b][c]=A[a+5][b+2][c+2]*0.848;
	        
	       B[a][b]=B[a+4][b+1]/0.419;
	        
	       A[a][b][c]=C[a]+A[a][b][c]*0.471;
	       B[a][b]=C[a-5]+A[a][b][c]/0.6;
	      }

    return 0;
}