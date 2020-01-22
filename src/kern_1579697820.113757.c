#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(570, 640, 980, "ones");
	double ***E = create_three_dim_double(1000, 100, 830, "ones");
	double **A = create_two_dim_double(140, 500, "ones");
	double ***D = create_three_dim_double(300, 920, 360, "ones");
	double ***C = create_three_dim_double(230, 450, 870, "ones");

	for (int c = 2; c < 826; c++)
	  for (int b = 2; b < 97; b++)
	    for (int a = 4; a < 138; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-2]+E[a][b][c]-B[a][b][c]/D[a][b][c]*A[a][b];
	      
	      C[a][b][c]=C[a+1][b+3][c+1]/0.935;
	      
	      E[a][b][c]=E[a][b+3][c+4]*C[a][b][c]+B[a][b][c]-D[a][b][c];
	      
	      E[a][b][c]=E[a+3][b][c]/0.717;
	      
	      double var_a=A[a][b]*0.998;
	      double var_b=A[a+2][b+3]/0.576;
	    }

    return 0;
}