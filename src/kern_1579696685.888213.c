#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(10, "zeros");
	double ***A = create_three_dim_double(30, 510, 840, "zeros");
	double *D = create_one_dim_double(110, "zeros");
	double ***B = create_three_dim_double(660, 750, 260, "zeros");

	for (int b = 0; b < 747; b++)
	  for (int a = 0; a < 6; a++)
	  {
	    
	     C[a]=A[a][b][a]-D[a];
	     C[a+4]=B[a][b][a]/B[a][b][a]+D[a];
	    
	     double var_a=B[a][b][a]*0.203;
	     double var_b=B[a+1][b+3][a+1]+0.464;
	  }

    return 0;
}