#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(990, 710, 250, "zeros");
	double **B = create_two_dim_double(40, 870, "zeros");

	for (int d = 0; d < 245; d++)
	  for (int c = 2; c < 705; c++)
	    for (int b = 5; b < 35; b++)
	      for (int a = 5; a < 35; a++)
	      {
	        
	       B[a][b]=B[a-3][b-2]+0.729;
	        
	       B[a][b]=B[a+5][b+1]-A[a][b][c];
	        
	       A[a][b][c]=A[a+5][b+5][c+5]+B[a][b];
	        
	       A[a][b][c]=B[a][b];
	        
	       double var_a=A[a][b][c]*0.931;
	       double var_b=A[a+3][b+3][c+1]/0.704;
	        
	       B[a][b]=A[a][b][c]*B[a][b];
	       A[a][b][c]=A[a+5][b+1][c+3]+0.353;
	        
	       A[a][b][c]=A[a][b][c]-B[a][b];
	       B[a][b]=A[a-5][b][c]/B[a][b];
	      }

    return 0;
}