#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(410, 200, "ones");
	double **B = create_two_dim_double(280, 690, "ones");
	double *D = create_one_dim_double(210, "ones");
	double ***A = create_three_dim_double(860, 920, 300, "ones");

	for (int d = 0; d < 300; d++)
	  for (int c = 5; c < 200; c++)
	    for (int b = 5; b < 276; b++)
	      for (int a = 5; a < 276; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c]*0.21;
	        
	       B[a][b]=B[a+3][b+4]*0.211;
	        
	       B[a][b]=B[a+4][b+4]/C[a][b];
	        
	       C[a][b]=C[a+2][b]-A[a][b][c]*B[a][b];
	        
	       C[a][b]=0.922;
	      }

    return 0;
}