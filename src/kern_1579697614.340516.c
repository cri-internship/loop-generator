#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(950, 140, 430, "ones");
	double **D = create_two_dim_double(460, 80, "ones");
	double **B = create_two_dim_double(450, 300, "ones");
	double *C = create_one_dim_double(950, "ones");

	for (int c = 1; c < 426; c++)
	  for (int b = 3; b < 76; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      B[a][b]=B[a-4][b-3]-C[a]+D[a][b];
	      
	      A[a][b][c]=A[a-5][b-2][c]/0.226*B[a][b];
	      
	      A[a][b][c]=A[a][b][c-1]*0.445;
	      
	      A[a][b][c]=A[a+5][b+2][c+2]-B[a][b]*C[a]/D[a][b];
	      
	      D[a][b]=D[a+3][b+4]/A[a][b][c]+0.526;
	      
	      double var_a=D[a][b]+0.463;
	      double var_b=D[a+5][b]*0.298;
	    }

    return 0;
}