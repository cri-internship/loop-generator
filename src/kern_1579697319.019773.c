#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(110, "ones");
	double ***A = create_three_dim_double(1000, 640, 940, "ones");
	double **C = create_two_dim_double(960, 850, "ones");
	double **D = create_two_dim_double(140, 410, "ones");
	double ***B = create_three_dim_double(960, 480, 870, "ones");

	for (int b = 5; b < 405; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     E[a]=E[a-2]/D[a][b]+C[a][b]-A[a][b][a]*B[a][b][a];
	    
	     A[a][b][a]=A[a-2][b-5][a-4]*E[a]-E[a]+C[a][b];
	    
	     C[a][b]=C[a][b+2]-E[a]/B[a][b][a];
	    
	     D[a][b]=D[a+5][b+5]-E[a];
	    
	     double var_a=A[a][b][a]/0.673;
	     double var_b=A[a+3][b][a+3]/0.675;
	  }

    return 0;
}