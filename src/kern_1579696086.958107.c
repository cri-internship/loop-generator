#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(700, 960, "ones");
	float **C = create_two_dim_float(240, 560, "ones");
	float **A = create_two_dim_float(390, 270, "ones");
	float *D = create_one_dim_float(10, "ones");

	for (int d = 5; d < 559; d++)
	  for (int c = 5; c < 9; c++)
	    for (int b = 5; b < 9; b++)
	      for (int a = 5; a < 9; a++)
	      {
	        
	       C[a][b]=C[a-3][b-1]*D[a]-B[a][b]/A[a][b];
	        
	       B[a][b]=B[a-2][b-5]+0.643;
	        
	       C[a][b]=C[a-4][b-1]+0.795;
	        
	       C[a][b]=C[a-5][b-2]/A[a][b]*B[a][b];
	        
	       C[a][b]=C[a+5][b+1]/D[a]*A[a][b]-B[a][b];
	        
	       B[a][b]=B[a+2][b]+0.418*D[a];
	        
	       D[a]=B[a][b]-0.519;
	       D[a+1]=B[a][b]/A[a][b]-C[a][b];
	      }

    return 0;
}