#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(360, "ones");
	double *D = create_one_dim_double(480, "ones");
	double ***B = create_three_dim_double(460, 450, 320, "ones");
	double **A = create_two_dim_double(170, 660, "ones");
	double *E = create_one_dim_double(110, "ones");

	for (int c = 3; c < 108; c++)
	  for (int b = 3; b < 108; b++)
	    for (int a = 3; a < 108; a++)
	    {
	      
	      D[a]=D[a-3]/0.25;
	      
	      C[a]=C[a-3]-0.01;
	      
	      E[a]=E[a+2]+D[a]/C[a]-A[a][b];
	      
	      E[a]=E[a+1]+B[a][b][c];
	      
	      D[a]=C[a]/0.739;
	      
	      A[a][b]=C[a]-A[a][b]*B[a][b][c]/0.727;
	      B[a][b][c]=C[a-2]/A[a][b]+B[a][b][c]*E[a]-D[a];
	    }

    return 0;
}