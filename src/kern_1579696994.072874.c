#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(620, 880, "zeros");
	double ***C = create_three_dim_double(720, 50, 620, "zeros");
	double ***A = create_three_dim_double(270, 470, 150, "zeros");
	double *D = create_one_dim_double(270, "zeros");

	for (int d = 0; d < 146; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 1; b < 266; b++)
	      for (int a = 1; a < 266; a++)
	      {
	        
	       C[a][b][c]=C[a][b-4][c]/D[a];
	        
	       B[a][b]=B[a+1][b+3]/0.474;
	        
	       D[a]=D[a+4]-A[a][b][c]*0.534;
	        
	       B[a][b]=0.926;
	        
	       A[a][b][c]=B[a][b]-B[a][b];
	       A[a+4][b+2][c+3]=D[a]-C[a][b][c]*B[a][b];
	        
	       A[a][b][c]=0.453;
	      }

    return 0;
}