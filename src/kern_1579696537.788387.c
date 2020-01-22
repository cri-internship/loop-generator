#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(50, 740, 100, "ones");
	double ***A = create_three_dim_double(460, 390, 980, "ones");
	double **B = create_two_dim_double(150, 550, "ones");

	for (int c = 4; c < 96; c++)
	  for (int b = 3; b < 390; b++)
	    for (int a = 3; a < 50; a++)
	    {
	      
	      B[a][b]=B[a+4][b+2]*A[a][b][c];
	      
	      C[a][b][c]=C[a][b+3][c+4]*0.272;
	      
	      A[a][b][c]=C[a][b][c];
	      A[a][b-1][c-4]=0.355;
	      
	      C[a][b][c]=A[a][b][c];
	      
	      double var_a=B[a][b]/0.596;
	      double var_b=B[a+5][b+1]+0.645;
	      
	      double var_c=A[a][b][c]*0.097;
	      double var_d=A[a-2][b-3][c-1]/0.461;
	    }

    return 0;
}