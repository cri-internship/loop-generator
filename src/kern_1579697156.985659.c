#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(250, 850, 120, "ones");
	double *D = create_one_dim_double(270, "ones");
	double *E = create_one_dim_double(370, "ones");
	double ***C = create_three_dim_double(650, 690, 230, "ones");
	double *B = create_one_dim_double(140, "ones");

	for (int b = 0; b < 846; b++)
	  for (int a = 0; a < 249; a++)
	  {
	    
	     A[a][b][a]=C[a][b][a];
	     A[a+1][b+4][a]=D[a];
	  }

    return 0;
}