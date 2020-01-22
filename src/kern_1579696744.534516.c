#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(710, 50, 20, "ones");
	double **A = create_two_dim_double(620, 510, "ones");
	double *D = create_one_dim_double(440, "ones");
	double **B = create_two_dim_double(610, 360, "ones");
	double *C = create_one_dim_double(430, "ones");

	for (int d = 4; d < 20; d++)
	  for (int c = 4; c < 50; c++)
	    for (int b = 4; b < 429; b++)
	      for (int a = 4; a < 429; a++)
	      {
	        
	       C[a]=C[a+1]+0.404;
	        
	       E[a][b][c]=0.613;
	       E[a-4][b-4][c-4]=0.468;
	        
	       B[a][b]=C[a]*E[a][b][c]-0.156/D[a]+B[a][b];
	       C[a]=C[a-3]+0.481/A[a][b];
	      }

    return 0;
}