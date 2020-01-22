#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(110, 940, "ones");
	double ***B = create_three_dim_double(90, 70, 460, "ones");
	double *A = create_one_dim_double(450, "ones");
	double **C = create_two_dim_double(990, 840, "ones");

	for (int b = 1; b < 65; b++)
	  for (int a = 3; a < 88; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b][a-1]+0.912;
	    
	     C[a][b]=C[a-3][b-1]-0.937;
	    
	     double var_a=D[a][b]*0.303;
	     D[a][b]=0.864;
	    
	     B[a][b][a]=B[a+2][b+5][a+2]/C[a][b]-A[a]*A[a];
	  }

    return 0;
}