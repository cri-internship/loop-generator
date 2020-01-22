#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(490, 820, 570, "ones");
	double *B = create_one_dim_double(410, "ones");
	double ***C = create_three_dim_double(530, 400, 620, "ones");
	double ***A = create_three_dim_double(260, 670, 740, "ones");

	for (int b = 0; b < 667; b++)
	  for (int a = 4; a < 258; a++)
	  {
	    
	     B[a]=B[a-4]-C[a][b][a];
	    
	     A[a][b][a]=A[a+2][b+3][a+1]-0.059*D[a][b][a]+C[a][b][a];
	    
	     B[a]=B[a+2]*A[a][b][a];
	    
	     D[a][b][a]=D[a+1][b+4][a]+A[a][b][a];
	  }

    return 0;
}