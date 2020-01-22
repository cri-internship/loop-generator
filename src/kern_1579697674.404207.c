#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 620, "random");
	double ***E = create_three_dim_double(110, 400, 380, "random");
	double **D = create_two_dim_double(860, 290, "random");
	double *C = create_one_dim_double(430, "random");
	double *A = create_one_dim_double(490, "random");

	for (int d = 3; d < 379; d++)
	  for (int c = 3; c < 290; c++)
	    for (int b = 0; b < 110; b++)
	      for (int a = 0; a < 110; a++)
	      {
	        
	       C[a]=C[a+5]+D[a][b]-A[a]/B[a][b];
	        
	       E[a][b][c]=0.476;
	       E[a][b+3][c+1]=0.19;
	        
	       E[a][b][c]=0.396;
	        
	       B[a][b]=0.189;
	       B[a+2][b]=0.393;
	        
	       D[a][b]=0.216;
	       D[a][b-3]=0.274;
	      }

    return 0;
}