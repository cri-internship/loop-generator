#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(370, 420, "ones");
	float **B = create_two_dim_float(70, 900, "ones");
	float **E = create_two_dim_float(390, 690, "ones");
	float *A = create_one_dim_float(470, "ones");
	float ***D = create_three_dim_float(10, 110, 400, "ones");

	for (int d = 5; d < 900; d++)
	  for (int c = 2; c < 70; c++)
	    for (int b = 2; b < 70; b++)
	      for (int a = 2; a < 70; a++)
	      {
	        
	       A[a]=A[a-2]/0.282;
	        
	       B[a][b]=B[a][b-5]*0.555;
	        
	       A[a]=0.086;
	        
	       A[a]=A[a]-C[a][b]*D[a][b][c]+B[a][b]/E[a][b];
	       D[a][b][c]=A[a+2]/E[a][b]*D[a][b][c];
	      }

    return 0;
}