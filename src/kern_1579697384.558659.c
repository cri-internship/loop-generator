#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 190, "ones");
	float **A = create_two_dim_float(980, 100, "ones");
	float ***C = create_three_dim_float(20, 690, 290, "ones");
	float *D = create_one_dim_float(670, "ones");

	for (int d = 3; d < 286; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 2; b < 15; b++)
	      for (int a = 2; a < 15; a++)
	      {
	        
	       B[a][b]=B[a+1][b+5]+A[a][b]/C[a][b][c];
	        
	       C[a][b][c]=0.857;
	       C[a-2][b-2][c-3]=0.736;
	        
	       C[a][b][c]=D[a]/B[a][b]+B[a][b];
	        
	       D[a]=A[a][b];
	       D[a]=A[a][b]-C[a][b][c]+0.116;
	        
	       A[a][b]=0.296;
	       A[a-2][b-5]=0.197;
	        
	       B[a][b]=C[a][b][c]*A[a][b]/0.444;
	       C[a][b][c]=C[a+5][b+3][c+4]-A[a][b]+B[a][b];
	      }

    return 0;
}