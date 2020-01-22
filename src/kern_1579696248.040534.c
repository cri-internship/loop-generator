#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "ones");
	float ***D = create_three_dim_float(930, 400, 230, "ones");
	float **A = create_two_dim_float(20, 70, "ones");
	float *B = create_one_dim_float(1000, "ones");

	for (int d = 2; d < 70; d++)
	  for (int c = 5; c < 20; c++)
	    for (int b = 5; b < 20; b++)
	      for (int a = 5; a < 20; a++)
	      {
	        
	       C[a]=C[a-5]*0.045;
	        
	       A[a][b]=A[a-2][b-1]-0.245;
	        
	       A[a][b]=0.519;
	        
	       C[a]=B[a]/0.642+C[a];
	       B[a]=B[a-2]/A[a][b]-C[a]+D[a][b][c];
	        
	       A[a][b]=B[a]+D[a][b][c]*A[a][b]/C[a];
	       D[a][b][c]=B[a+5]*A[a][b];
	      }

    return 0;
}