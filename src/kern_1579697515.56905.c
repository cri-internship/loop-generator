#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(930, 140, "random");
	double *E = create_one_dim_double(450, "random");
	double *B = create_one_dim_double(360, "random");
	double ***A = create_three_dim_double(860, 920, 280, "random");
	double **D = create_two_dim_double(360, 170, "random");

	for (int b = 2; b < 170; b++)
	  for (int a = 4; a < 360; a++)
	  {
	    
	     E[a]=E[a-4]+A[a][b][a]-B[a];
	    
	     D[a][b]=D[a][b-2]*0.492;
	    
	     double var_a=E[a]-0.217;
	     double var_b=E[a+2]+0.591;
	    
	     A[a][b][a]=A[a][b][a]*E[a]/D[a][b]+0.728;
	     D[a][b]=A[a][b+2][a+1]+E[a]-B[a]/D[a][b];
	  }

    return 0;
}