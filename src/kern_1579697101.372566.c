#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(810, "random");
	double *A = create_one_dim_double(450, "random");
	double *E = create_one_dim_double(20, "random");
	double *C = create_one_dim_double(470, "random");
	double ***B = create_three_dim_double(80, 40, 540, "random");

	for (int b = 0; b < 36; b++)
	  for (int a = 4; a < 20; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+4][a+5]-D[a];
	    
	     B[a][b][a]=0.297;
	    
	     C[a]=0.459;
	     C[a]=0.9;
	    
	     E[a]=0.065;
	     E[a-3]=0.697;
	    
	     C[a]=D[a]+C[a]/B[a][b][a]*E[a]-A[a];
	    
	     double var_a=D[a]/0.602;
	     double var_b=D[a+1]*0.972;
	  }

    return 0;
}