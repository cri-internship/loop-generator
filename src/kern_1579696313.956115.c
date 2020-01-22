#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(80, 540, "ones");
	double ***C = create_three_dim_double(320, 680, 800, "ones");
	double **B = create_two_dim_double(350, 380, "ones");

	for (int d = 4; d < 380; d++)
	  for (int c = 3; c < 79; c++)
	    for (int b = 3; b < 79; b++)
	      for (int a = 3; a < 79; a++)
	      {
	        
	       A[a][b]=A[a+1][b+5]-C[a][b][c];
	        
	       B[a][b]=0.998;
	       B[a+4][b]=0.404;
	        
	       A[a][b]=B[a][b]+A[a][b];
	       C[a][b][c]=B[a-3][b-4]*A[a][b];
	      }

    return 0;
}