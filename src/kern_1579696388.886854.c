#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(40, 360, "ones");
	double ***A = create_three_dim_double(620, 860, 470, "ones");
	double *B = create_one_dim_double(930, "ones");

	for (int d = 1; d < 357; d++)
	  for (int c = 5; c < 38; c++)
	    for (int b = 5; b < 38; b++)
	      for (int a = 5; a < 38; a++)
	      {
	        
	       B[a]=B[a-4]+0.358;
	        
	       B[a]=B[a+1]+C[a][b];
	        
	       C[a][b]=C[a+2][b+3]-B[a];
	        
	       C[a][b]=0.27;
	        
	       double var_a=B[a]/0.402;
	        
	       B[a]=C[a][b]+B[a]*A[a][b][c];
	       C[a][b]=C[a][b-1]/B[a]+A[a][b][c];
	      }

    return 0;
}