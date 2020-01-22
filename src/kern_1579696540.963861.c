#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(370, 460, "zeros");
	double **A = create_two_dim_double(360, 430, "zeros");
	double ***D = create_three_dim_double(320, 890, 30, "zeros");
	double ***E = create_three_dim_double(730, 370, 620, "zeros");
	double *C = create_one_dim_double(60, "zeros");

	for (int c = 4; c < 29; c++)
	  for (int b = 5; b < 370; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      E[a][b][c]=E[a-5][b-3][c-1]*0.424;
	      
	      D[a][b][c]=D[a+3][b+2][c+1]-B[a][b]/E[a][b][c];
	      
	      D[a][b][c]=0.96;
	      
	      B[a][b]=A[a][b]-D[a][b][c];
	      B[a-2][b-5]=C[a]/E[a][b][c]-A[a][b]+D[a][b][c];
	      
	      double var_a=C[a]+0.709;
	      double var_b=C[a-1]+0.758;
	      
	      double var_c=D[a][b][c]+0.081;
	      double var_d=D[a-4][b-3][c-4]+0.518;
	    }

    return 0;
}