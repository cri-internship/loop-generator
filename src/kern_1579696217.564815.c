#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 210, "zeros");
	double *A = create_one_dim_double(20, "zeros");
	double ***C = create_three_dim_double(550, 200, 200, "zeros");

	for (int d = 2; d < 200; d++)
	  for (int c = 4; c < 200; c++)
	    for (int b = 3; b < 20; b++)
	      for (int a = 3; a < 20; a++)
	      {
	        
	       A[a]=A[a-2]*0.323;
	        
	       B[a][b]=A[a]*C[a][b][c];
	       B[a+1][b+1]=0.141;
	        
	       A[a]=B[a][b]/C[a][b][c]-0.524;
	       C[a][b][c]=B[a+1][b+3]+0.615;
	        
	       double var_a=A[a]*0.887;
	       double var_b=A[a-3]-0.736;
	        
	       B[a][b]=C[a][b][c]-B[a][b];
	       B[a][b]=C[a][b-4][c-2]+B[a][b]/A[a];
	      }

    return 0;
}