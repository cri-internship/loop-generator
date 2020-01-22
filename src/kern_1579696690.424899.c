#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(630, "zeros");
	float *B = create_one_dim_float(420, "zeros");
	float ***D = create_three_dim_float(10, 300, 330, "zeros");
	float **C = create_two_dim_float(310, 660, "zeros");

	for (int d = 0; d < 326; d++)
	  for (int c = 0; c < 298; c++)
	    for (int b = 4; b < 8; b++)
	      for (int a = 4; a < 8; a++)
	      {
	        
	       A[a]=A[a-1]*C[a][b]+B[a];
	        
	       B[a]=B[a+5]/0.693;
	        
	       D[a][b][c]=D[a+2][b+2][c+4]/0.021;
	        
	       B[a]=B[a+1]+A[a];
	        
	       C[a][b]=C[a][b+5]*A[a]+D[a][b][c];
	        
	       A[a]=0.061;
	      }

    return 0;
}