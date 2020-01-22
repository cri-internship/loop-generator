#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(150, 440, "ones");
	double *A = create_one_dim_double(1000, "ones");
	double ***C = create_three_dim_double(100, 630, 290, "ones");

	for (int d = 0; d < 286; d++)
	  for (int c = 0; c < 630; c++)
	    for (int b = 0; b < 97; b++)
	      for (int a = 0; a < 97; a++)
	      {
	        
	       A[a]=C[a][b][c];
	       C[a][b][c]=A[a]*B[a][b]+B[a][b];
	        
	       A[a]=A[a+5]-B[a][b]/C[a][b][c];
	        
	       C[a][b][c]=C[a][b][c+2]/A[a]-B[a][b];
	        
	       B[a][b]=C[a][b][c]/B[a][b]*0.239;
	       A[a]=C[a+3][b][c+4]-A[a];
	      }

    return 0;
}