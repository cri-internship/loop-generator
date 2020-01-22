#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(240, 730, "ones");
	double ***C = create_three_dim_double(580, 670, 480, "ones");
	double *D = create_one_dim_double(460, "ones");
	double *A = create_one_dim_double(270, "ones");
	double ***E = create_three_dim_double(410, 990, 190, "ones");

	for (int c = 0; c < 475; c++)
	  for (int b = 0; b < 665; b++)
	    for (int a = 2; a < 237; a++)
	    {
	      
	      C[a][b][c]=A[a]+E[a][b][c]/D[a]-B[a][b];
	      C[a+4][b+5][c+5]=B[a][b]/E[a][b][c]*A[a]+D[a];
	      
	      B[a][b]=C[a][b][c];
	      B[a+3][b+5]=A[a]*E[a][b][c]+D[a];
	      
	      double var_a=C[a][b][c]-0.075;
	      double var_b=C[a+3][b+1][c+3]/0.249;
	      
	      double var_c=A[a]+0.741;
	      double var_d=A[a-2]*0.756;
	      
	      E[a][b][c]=A[a]*B[a][b]/D[a]+E[a][b][c]-C[a][b][c];
	      B[a][b]=A[a+2]-E[a][b][c]*D[a];
	    }

    return 0;
}