#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(770, "zeros");
	double ***A = create_three_dim_double(800, 610, 910, "zeros");
	double ***B = create_three_dim_double(210, 700, 830, "zeros");
	double ***C = create_three_dim_double(790, 350, 320, "zeros");

	for (int b = 2; b < 609; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     D[a]=D[a-3]-0.369;
	    
	     B[a][b][a]=B[a][b-2][a]+C[a][b][a]-D[a]/A[a][b][a];
	    
	     D[a]=D[a-5]/0.148+B[a][b][a]-A[a][b][a];
	    
	     double var_a=A[a][b][a]*0.835;
	     double var_b=A[a+4][b+1][a]-0.219;
	  }

    return 0;
}