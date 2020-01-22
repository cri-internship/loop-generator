#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(710, 790, "ones");
	double *B = create_one_dim_double(690, "ones");
	double ***D = create_three_dim_double(830, 650, 510, "ones");
	double **C = create_two_dim_double(970, 210, "ones");
	double *A = create_one_dim_double(140, "ones");

	for (int d = 0; d < 205; d++)
	  for (int c = 5; c < 140; c++)
	    for (int b = 5; b < 140; b++)
	      for (int a = 5; a < 140; a++)
	      {
	        
	       B[a]=B[a-4]/0.665;
	        
	       A[a]=0.293;
	       float  var_a=A[a]+0.812;
	        
	       B[a]=B[a-5]/0.216;
	        
	       C[a][b]=C[a+5][b+5]-B[a]+0.232/E[a][b];
	        
	       E[a][b]=C[a][b]*D[a][b][c]+D[a][b][c];
	       E[a+1][b+5]=B[a]*A[a];
	      }

    return 0;
}