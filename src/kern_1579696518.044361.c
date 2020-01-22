#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(650, "ones");
	double ***A = create_three_dim_double(790, 480, 70, "ones");
	double ***D = create_three_dim_double(110, 610, 70, "ones");
	double ***B = create_three_dim_double(310, 490, 580, "ones");

	for (int d = 4; d < 67; d++)
	  for (int c = 1; c < 477; c++)
	    for (int b = 3; b < 110; b++)
	      for (int a = 3; a < 110; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-1][c]*0.918;
	        
	       B[a][b][c]=B[a][b+2][c+3]*0.073;
	        
	       A[a][b][c]=A[a+2][b+3][c+3]*D[a][b][c]-0.324;
	        
	       double var_a=D[a][b][c]*0.499;
	       double var_b=D[a-3][b][c-1]/0.58;
	        
	       B[a][b][c]=B[a][b][c]-A[a][b][c]*C[a]/C[a];
	       D[a][b][c]=B[a+1][b+2][c+4]*0.887/D[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]+C[a]/B[a][b][c];
	       C[a]=A[a][b][c-4]-D[a][b][c]/B[a][b][c]+C[a];
	      }

    return 0;
}