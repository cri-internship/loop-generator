#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 390, "zeros");
	double **B = create_two_dim_double(70, 80, "zeros");
	double ***C = create_three_dim_double(170, 740, 900, "zeros");
	double *D = create_one_dim_double(370, "zeros");

	for (int c = 4; c < 897; c++)
	  for (int b = 2; b < 80; b++)
	    for (int a = 3; a < 69; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-1][c-4]/0.241;
	      
	      C[a][b][c]=A[a][b]-D[a]/B[a][b];
	      
	      double var_a=B[a][b]-0.393;
	      double var_b=B[a+1][b]+0.261;
	      
	      double var_c=A[a][b]+0.257;
	      double var_d=A[a+4][b+3]*0.187;
	      
	      C[a][b][c]=C[a][b][c]*B[a][b]/D[a];
	      A[a][b]=C[a][b+4][c+1]-B[a][b]+D[a]*A[a][b];
	    }

    return 0;
}