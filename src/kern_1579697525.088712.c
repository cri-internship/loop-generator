#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 200, 90, "random");
	double ***A = create_three_dim_double(220, 780, 360, "random");
	double ***C = create_three_dim_double(410, 580, 390, "random");
	double *D = create_one_dim_double(460, "random");

	for (int b = 0; b < 199; b++)
	  for (int a = 4; a < 218; a++)
	  {
	    
	     D[a]=D[a-4]*0.374;
	    
	     C[a][b][a]=D[a]*C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+5][a+1]/0.006;
	    
	     A[a][b][a]=0.035;
	     A[a+2][b+5][a]=0.839;
	    
	     double var_a=B[a][b][a]/0.777;
	     double var_b=B[a][b+1][a+2]/0.141;
	  }

    return 0;
}