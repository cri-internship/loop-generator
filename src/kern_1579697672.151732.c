#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(190, 490, 90, "zeros");
	double ***A = create_three_dim_double(260, 930, 250, "zeros");
	double **C = create_two_dim_double(460, 740, "zeros");

	for (int d = 3; d < 90; d++)
	  for (int c = 4; c < 490; c++)
	    for (int b = 2; b < 190; b++)
	      for (int a = 2; a < 190; a++)
	      {
	        
	       B[a][b][c]=B[a][b-4][c-3]/C[a][b];
	        
	       A[a][b][c]=A[a-1][b-4][c-1]-0.14;
	        
	       B[a][b][c]=B[a-2][b-1][c-2]+A[a][b][c]-C[a][b];
	        
	       C[a][b]=C[a][b+1]*0.326;
	        
	       A[a][b][c]=A[a][b+4][c]-0.896;
	        
	       B[a][b][c]=C[a][b]/0.725;
	       A[a][b][c]=C[a+2][b+3]-B[a][b][c]+A[a][b][c];
	        
	       double var_a=A[a][b][c]-0.701;
	       double var_b=A[a+1][b][c+3]/0.464;
	      }

    return 0;
}