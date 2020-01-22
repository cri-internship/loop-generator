#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(710, 40, 730, "ones");
	double *B = create_one_dim_double(460, "ones");
	double **D = create_two_dim_double(670, 500, "ones");
	double *C = create_one_dim_double(670, "ones");

	for (int d = 5; d < 727; d++)
	  for (int c = 4; c < 40; c++)
	    for (int b = 5; b < 455; b++)
	      for (int a = 5; a < 455; a++)
	      {
	        
	       B[a]=B[a+1]+0.153;
	        
	       A[a][b][c]=0.878;
	       A[a-5][b-4][c-5]=0.703;
	        
	       C[a]=D[a][b];
	       C[a-5]=A[a][b][c]-B[a]+B[a];
	        
	       B[a]=D[a][b]-0.556;
	       D[a][b]=D[a-3][b]+0.741*B[a];
	        
	       C[a]=A[a][b][c]-D[a][b]+B[a];
	       A[a][b][c]=A[a+3][b][c+3]/D[a][b]-B[a]*C[a];
	        
	       B[a]=C[a]/A[a][b][c];
	       B[a]=C[a+4]*A[a][b][c];
	        
	       double var_a=B[a]/0.382;
	       double var_b=B[a+5]/0.583;
	      }

    return 0;
}