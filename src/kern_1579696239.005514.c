#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(500, 560, "zeros");
	double ***C = create_three_dim_double(40, 700, 240, "zeros");
	double **A = create_two_dim_double(800, 610, "zeros");

	for (int d = 0; d < 238; d++)
	  for (int c = 5; c < 555; c++)
	    for (int b = 5; b < 35; b++)
	      for (int a = 5; a < 35; a++)
	      {
	        
	       C[a][b][c]=A[a][b]*C[a][b][c]-B[a][b];
	       A[a][b]=C[a][b][c];
	        
	       B[a][b]=0.136-C[a][b][c];
	       B[a-5][b-5]=A[a][b]+0.179;
	        
	       C[a][b][c]=0.868;
	        
	       double var_a=B[a][b]+0.579;
	       double var_b=B[a+3][b+5]-0.401;
	      }

    return 0;
}