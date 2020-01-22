#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(600, 540, "ones");
	double ***D = create_three_dim_double(740, 830, 160, "ones");
	double **B = create_two_dim_double(400, 640, "ones");
	double *A = create_one_dim_double(880, "ones");
	double *E = create_one_dim_double(670, "ones");

	for (int d = 0; d < 155; d++)
	  for (int c = 0; c < 635; c++)
	    for (int b = 0; b < 399; b++)
	      for (int a = 0; a < 399; a++)
	      {
	        
	       D[a][b][c]=B[a][b]-D[a][b][c]*E[a]+C[a][b]/A[a];
	       B[a][b]=E[a];
	        
	       B[a][b]=B[a+1][b+1]-C[a][b]+0.148;
	        
	       E[a]=0.272;
	       E[a+4]=0.677;
	        
	       D[a][b][c]=0.86;
	        
	       A[a]=B[a][b]*E[a]/B[a][b]+D[a][b][c];
	       A[a]=0.251;
	      }

    return 0;
}