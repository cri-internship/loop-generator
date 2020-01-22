#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(660, 740, 20, "random");
	double *B = create_one_dim_double(820, "random");
	double ***D = create_three_dim_double(880, 370, 10, "random");
	double *C = create_one_dim_double(290, "random");

	for (int d = 3; d < 8; d++)
	  for (int c = 5; c < 369; c++)
	    for (int b = 4; b < 660; b++)
	      for (int a = 4; a < 660; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-5][c-1]/0.262;
	        
	       B[a]=B[a-3]*0.423;
	        
	       B[a]=C[a]+0.443;
	        
	       D[a][b][c]=D[a+5][b+1][c+2]-0.678;
	        
	       double var_a=B[a]/0.159;
	       double var_b=B[a-1]-0.358;
	        
	       double var_c=A[a][b][c]*0.509;
	       double var_d=A[a-4][b][c-3]*0.765;
	        
	       A[a][b][c]=B[a]*C[a]+A[a][b][c]/D[a][b][c];
	       B[a]=B[a-4]-A[a][b][c];
	      }

    return 0;
}