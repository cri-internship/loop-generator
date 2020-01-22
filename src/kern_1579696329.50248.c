#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(380, 430, "random");
	double *B = create_one_dim_double(580, "random");
	double *C = create_one_dim_double(190, "random");
	double ***A = create_three_dim_double(810, 110, 270, "random");
	double *E = create_one_dim_double(790, "random");

	for (int b = 5; b < 105; b++)
	  for (int a = 4; a < 186; a++)
	  {
	    
	     D[a][b]=D[a-4][b-5]+0.356;
	    
	     A[a][b][a]=A[a+4][b+5][a+3]/E[a]+C[a]-B[a]*D[a][b];
	    
	     C[a]=A[a][b][a];
	     C[a+4]=B[a]/A[a][b][a];
	    
	     D[a][b]=0.929;
	    
	     B[a]=E[a];
	     B[a+4]=A[a][b][a];
	    
	     double var_a=D[a][b]*0.475;
	     double var_b=D[a+3][b+1]/0.947;
	    
	     double var_c=C[a]*0.16;
	     double var_d=C[a-1]+0.797;
	  }

    return 0;
}