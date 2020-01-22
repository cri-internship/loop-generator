#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(580, 750, 750, "ones");
	double ***A = create_three_dim_double(390, 20, 950, "ones");
	double ***D = create_three_dim_double(150, 580, 490, "ones");
	double **E = create_two_dim_double(320, 360, "ones");
	double *C = create_one_dim_double(550, "ones");

	for (int b = 0; b < 576; b++)
	  for (int a = 0; a < 145; a++)
	  {
	    
	     C[a]=D[a][b][a]/A[a][b][a]+E[a][b];
	     D[a][b][a]=C[a];
	    
	     B[a][b][a]=D[a][b][a]*B[a][b][a]+A[a][b][a];
	     E[a][b]=D[a+5][b+4][a+5]*0.134;
	  }

    return 0;
}