#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(570, 450, 270, "zeros");
	double *B = create_one_dim_double(740, "zeros");
	double ***D = create_three_dim_double(290, 980, 330, "zeros");
	double *A = create_one_dim_double(180, "zeros");

	for (int c = 4; c < 270; c++)
	  for (int b = 3; b < 448; b++)
	    for (int a = 2; a < 175; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-1][c-2]-A[a];
	      
	      C[a][b][c]=C[a-1][b-3][c-4]/B[a];
	      
	      B[a]=0.207;
	      B[a-2]=D[a][b][c];
	      
	      D[a][b][c]=D[a][b][c]-A[a]/B[a];
	      A[a]=D[a-2][b-1][c-3]*B[a]/A[a]+C[a][b][c];
	      
	      double var_a=D[a][b][c]+0.803;
	      double var_b=D[a+2][b+1][c+1]-0.007;
	      
	      double var_c=A[a]-0.874;
	      double var_d=A[a+5]+0.885;
	    }

    return 0;
}