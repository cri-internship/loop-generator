#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(580, "random");
	double **E = create_two_dim_double(670, 810, "random");
	double ***C = create_three_dim_double(180, 450, 200, "random");
	double *D = create_one_dim_double(860, "random");
	double **B = create_two_dim_double(870, 190, "random");

	for (int b = 2; b < 810; b++)
	  for (int a = 4; a < 580; a++)
	  {
	    
	     E[a][b]=E[a-4][b]*0.621;
	    
	     E[a][b]=E[a-4][b-2]*0.409;
	    
	     A[a]=A[a-3]*0.215;
	    
	     D[a]=0.424;
	     D[a-4]=0.678;
	    
	     double var_a=D[a]-0.544;
	     double var_b=D[a-3]+0.002;
	    
	     A[a]=D[a]/C[a][b][a]+B[a][b]*A[a];
	     E[a][b]=D[a+2]+0.979-A[a]*E[a][b];
	  }

    return 0;
}