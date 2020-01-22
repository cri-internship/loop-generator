#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(470, 890, "ones");
	double ***C = create_three_dim_double(730, 220, 30, "ones");
	double *A = create_one_dim_double(410, "ones");

	for (int d = 0; d < 30; d++)
	  for (int c = 3; c < 219; c++)
	    for (int b = 3; b < 407; b++)
	      for (int a = 3; a < 407; a++)
	      {
	        
	       B[a][b]=B[a-3][b-3]+0.423;
	        
	       C[a][b][c]=C[a+1][b+1][c]+A[a]/B[a][b];
	        
	       A[a]=A[a+2]+0.925;
	        
	       B[a][b]=B[a+2][b+3]+0.072;
	        
	       B[a][b]=B[a+4][b+5]+C[a][b][c]-A[a];
	        
	       A[a]=A[a]+B[a][b]/C[a][b][c];
	       B[a][b]=A[a+3]/B[a][b];
	        
	       double var_a=A[a]*0.7;
	      }

    return 0;
}