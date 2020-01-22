#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(800, 100, 290, "random");
	double *D = create_one_dim_double(980, "random");
	double *C = create_one_dim_double(530, "random");
	double **B = create_two_dim_double(390, 920, "random");

	for (int c = 1; c < 920; c++)
	  for (int b = 5; b < 390; b++)
	    for (int a = 5; a < 390; a++)
	    {
	      
	      D[a]=0.86;
	      float  var_a=D[a]+0.693;
	      
	      D[a]=D[a-5]*A[a][b][c]+C[a]/0.134;
	      
	      C[a]=D[a]/A[a][b][c];
	      C[a+2]=0.678/B[a][b];
	      
	      C[a]=1.0;
	      
	      D[a]=B[a][b]+0.102/D[a]*A[a][b][c];
	      C[a]=B[a-4][b-1]/0.49+D[a];
	      
	      A[a][b][c]=C[a]*B[a][b]+A[a][b][c];
	      B[a][b]=C[a]*B[a][b];
	    }

    return 0;
}