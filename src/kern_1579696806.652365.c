#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(430, 480, "zeros");
	double **A = create_two_dim_double(290, 280, "zeros");
	double *D = create_one_dim_double(860, "zeros");
	double ***C = create_three_dim_double(860, 340, 430, "zeros");

	for (int b = 0; b < 335; b++)
	  for (int a = 3; a < 855; a++)
	  {
	    
	     D[a]=D[a-3]-0.122+C[a][b][a];
	    
	     C[a][b][a]=C[a+5][b+5][a+5]-A[a][b]+D[a]/D[a];
	    
	     double var_a=D[a]+0.441;
	     double var_b=D[a-2]-0.112;
	  }

    return 0;
}