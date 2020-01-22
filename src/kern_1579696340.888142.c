#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(440, "zeros");
	float **B = create_two_dim_float(450, 850, "zeros");
	float **A = create_two_dim_float(740, 690, "zeros");
	float **C = create_two_dim_float(880, 720, "zeros");

	for (int d = 5; d < 718; d++)
	  for (int c = 4; c < 450; c++)
	    for (int b = 4; b < 450; b++)
	      for (int a = 4; a < 450; a++)
	      {
	        
	       B[a][b]=B[a-2][b-2]/0.087;
	        
	       B[a][b]=B[a-4][b]*D[a]+C[a][b]-A[a][b];
	        
	       C[a][b]=B[a][b]+A[a][b]/D[a];
	       C[a+4][b+2]=0.117;
	        
	       A[a][b]=B[a][b]/C[a][b]-A[a][b];
	       D[a]=B[a-2][b-5]-A[a][b]*C[a][b]+D[a];
	        
	       B[a][b]=C[a][b]-B[a][b];
	       C[a][b]=C[a+1][b+2]/B[a][b]+A[a][b]*D[a];
	      }

    return 0;
}