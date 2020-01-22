#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(20, "zeros");
	double ***C = create_three_dim_double(630, 560, 420, "zeros");
	double *A = create_one_dim_double(920, "zeros");

	for (int d = 3; d < 416; d++)
	  for (int c = 5; c < 555; c++)
	    for (int b = 4; b < 18; b++)
	      for (int a = 4; a < 18; a++)
	      {
	        
	       B[a]=B[a-4]-0.428;
	        
	       C[a][b][c]=A[a]+B[a];
	       C[a-3][b-5][c-3]=B[a]+A[a];
	        
	       B[a]=B[a]*A[a]/0.025;
	       A[a]=B[a-3]/A[a];
	        
	       double var_a=C[a][b][c]-0.437;
	       double var_b=C[a+2][b+5][c+4]*0.547;
	        
	       C[a][b][c]=B[a]-C[a][b][c];
	       C[a][b][c]=B[a+2]/C[a][b][c]*A[a];
	        
	       A[a]=A[a]-C[a][b][c]*B[a];
	       A[a]=A[a+5]-C[a][b][c]+0.235;
	      }

    return 0;
}