#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(820, 990, "ones");
	double ***D = create_three_dim_double(420, 950, 480, "ones");
	double ***A = create_three_dim_double(330, 970, 250, "ones");
	double *B = create_one_dim_double(640, "ones");

	for (int d = 5; d < 248; d++)
	  for (int c = 4; c < 945; c++)
	    for (int b = 5; b < 327; b++)
	      for (int a = 5; a < 327; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b-2][c-5]-0.908;
	        
	       D[a][b][c]=D[a+4][b+4][c+4]*0.362;
	        
	       D[a][b][c]=D[a+4][b+3][c+3]*0.094;
	        
	       D[a][b][c]=D[a][b+5][c+1]/0.499;
	        
	       A[a][b][c]=0.014;
	       A[a+3][b+1][c+2]=0.675;
	        
	       B[a]=C[a][b]*D[a][b][c]/A[a][b][c];
	       B[a+1]=A[a][b][c];
	        
	       double var_a=C[a][b]/0.915;
	       double var_b=C[a-2][b-4]-0.409;
	      }

    return 0;
}