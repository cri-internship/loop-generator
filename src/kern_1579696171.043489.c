#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(500, 600, "zeros");
	double *A = create_one_dim_double(250, "zeros");
	double *B = create_one_dim_double(640, "zeros");
	double **D = create_two_dim_double(900, 490, "zeros");
	double ***C = create_three_dim_double(520, 960, 930, "zeros");

	for (int c = 5; c < 930; c++)
	  for (int b = 4; b < 489; b++)
	    for (int a = 3; a < 250; a++)
	    {
	      
	      C[a][b][c]=C[a][b-4][c-5]+D[a][b]/A[a];
	      
	      A[a]=A[a-3]-0.69;
	      
	      E[a][b]=E[a][b+1]/B[a];
	      
	      D[a][b]=D[a][b+1]-0.523;
	      
	      E[a][b]=D[a][b]*E[a][b]/0.25;
	      C[a][b][c]=D[a-2][b-1]/E[a][b]-C[a][b][c];
	      
	      double var_a=D[a][b]*0.515;
	      double var_b=D[a+3][b]-0.49;
	      
	      D[a][b]=B[a]-C[a][b][c];
	      A[a]=B[a-2]+C[a][b][c]*A[a];
	    }

    return 0;
}