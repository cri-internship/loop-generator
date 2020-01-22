#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(450, 440, 60, "random");
	double **B = create_two_dim_double(140, 230, "random");
	double ***C = create_three_dim_double(820, 900, 930, "random");
	double ***D = create_three_dim_double(780, 200, 260, "random");
	double ***A = create_three_dim_double(130, 450, 380, "random");

	for (int c = 4; c < 60; c++)
	  for (int b = 2; b < 200; b++)
	    for (int a = 4; a < 126; a++)
	    {
	      
	      E[a][b][c]=E[a+1][b+4][c]/B[a][b];
	      
	      A[a][b][c]=A[a+2][b][c+3]/E[a][b][c]-D[a][b][c];
	      
	      B[a][b]=B[a][b]*A[a][b][c]+C[a][b][c]/E[a][b][c]-A[a][b][c];
	      D[a][b][c]=B[a+2][b+4]*A[a][b][c]/D[a][b][c];
	      
	      double var_a=A[a][b][c]*0.362;
	      double var_b=A[a+4][b+5][c+2]-0.59;
	      
	      double var_c=D[a][b][c]-0.752;
	      double var_d=D[a-4][b-2][c-4]/0.273;
	    }

    return 0;
}