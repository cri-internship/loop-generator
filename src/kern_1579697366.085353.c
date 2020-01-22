#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(900, 540, "zeros");
	double *A = create_one_dim_double(230, "zeros");
	double *D = create_one_dim_double(680, "zeros");
	double ***B = create_three_dim_double(270, 450, 510, "zeros");

	for (int b = 3; b < 536; b++)
	  for (int a = 4; a < 675; a++)
	  {
	    
	     C[a][b]=C[a-4][b-3]+0.603;
	    
	     C[a][b]=C[a-1][b-2]/D[a]*A[a];
	    
	     D[a]=D[a+5]/0.742;
	    
	     C[a][b]=C[a+2][b+4]*0.006;
	    
	     D[a]=C[a][b]-B[a][b][a];
	  }

    return 0;
}