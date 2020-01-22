#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(940, "ones");
	double **C = create_two_dim_double(250, 470, "ones");
	double ***A = create_three_dim_double(380, 260, 260, "ones");
	double ***E = create_three_dim_double(160, 950, 530, "ones");
	double *B = create_one_dim_double(210, "ones");

	for (int c = 0; c < 466; c++)
	  for (int b = 4; b < 210; b++)
	    for (int a = 4; a < 210; a++)
	    {
	      
	      C[a][b]=C[a-4][b]+0.504-E[a][b][c]*D[a];
	      
	      D[a]=D[a-3]*A[a][b][c]-C[a][b]+C[a][b];
	      
	      C[a][b]=C[a+3][b]*0.537;
	      
	      B[a]=E[a][b][c]+D[a];
	      B[a-1]=0.281/E[a][b][c]+C[a][b];
	      
	      double var_a=D[a]-0.249;
	      double var_b=D[a-2]*0.268;
	    }

    return 0;
}