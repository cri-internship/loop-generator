#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(690, "zeros");
	float **D = create_two_dim_float(470, 860, "zeros");
	float *A = create_one_dim_float(640, "zeros");
	float **C = create_two_dim_float(350, 250, "zeros");

	for (int d = 5; d < 249; d++)
	  for (int c = 5; c < 349; c++)
	    for (int b = 5; b < 349; b++)
	      for (int a = 5; a < 349; a++)
	      {
	        
	       A[a]=A[a-2]*0.547;
	        
	       C[a][b]=C[a-4][b]/0.111;
	        
	       B[a]=B[a+1]-0.621;
	        
	       C[a][b]=C[a+1][b+1]*A[a]+B[a];
	        
	       B[a]=C[a][b]+D[a][b]-C[a][b];
	        
	       A[a]=D[a][b]*C[a][b];
	      }

    return 0;
}