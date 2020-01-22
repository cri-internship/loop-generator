#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(980, 510, 140, "ones");
	float **C = create_two_dim_float(160, 290, "ones");
	float *A = create_one_dim_float(800, "ones");
	float **B = create_two_dim_float(370, 830, "ones");

	for (int d = 0; d < 289; d++)
	  for (int c = 0; c < 157; c++)
	    for (int b = 0; b < 157; b++)
	      for (int a = 0; a < 157; a++)
	      {
	        
	       B[a][b]=B[a+3][b+5]+A[a]*D[a][b][c];
	        
	       B[a][b]=0.224;
	        
	       D[a][b][c]=C[a][b]+B[a][b]*D[a][b][c]-B[a][b];
	       A[a]=C[a+3][b+1]-D[a][b][c];
	        
	       B[a][b]=A[a]*0.966;
	       C[a][b]=A[a+3]*D[a][b][c];
	      }

    return 0;
}