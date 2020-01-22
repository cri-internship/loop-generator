#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(140, 760, "random");
	double ***C = create_three_dim_double(340, 20, 510, "random");
	double *B = create_one_dim_double(330, "random");
	double ***D = create_three_dim_double(570, 40, 300, "random");

	for (int d = 5; d < 297; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 3; b < 327; b++)
	      for (int a = 3; a < 327; a++)
	      {
	        
	       D[a][b][c]=D[a-1][b-4][c-5]/0.157;
	        
	       C[a][b][c]=C[a-3][b-5][c-2]-0.188;
	        
	       B[a]=B[a+3]/0.385;
	        
	       D[a][b][c]=D[a+3][b+5][c+3]*B[a]/C[a][b][c];
	        
	       C[a][b][c]=D[a][b][c]+A[a][b];
	        
	       double var_a=C[a][b][c]+0.52;
	       double var_b=C[a-1][b][c-4]/0.565;
	        
	       double var_c=D[a][b][c]-0.929;
	       double var_d=D[a+1][b+5][c+1]-0.191;
	      }

    return 0;
}