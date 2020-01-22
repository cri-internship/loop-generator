#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(830, "zeros");
	double *E = create_one_dim_double(780, "zeros");
	double *C = create_one_dim_double(890, "zeros");
	double *A = create_one_dim_double(180, "zeros");
	double **D = create_two_dim_double(360, 230, "zeros");

	for (int d = 0; d < 227; d++)
	  for (int c = 4; c < 355; c++)
	    for (int b = 4; b < 355; b++)
	      for (int a = 4; a < 355; a++)
	      {
	        
	       E[a]=E[a-1]+0.856;
	        
	       D[a][b]=D[a+5][b+3]*A[a];
	        
	       E[a]=0.613+B[a]*D[a][b]/C[a];
	        
	       A[a]=E[a]*C[a]/D[a][b];
	       E[a]=E[a-4]/C[a]*A[a]+0.485-D[a][b];
	      }

    return 0;
}