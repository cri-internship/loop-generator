#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(520, 720, "ones");
	double *D = create_one_dim_double(450, "ones");
	double ***A = create_three_dim_double(970, 820, 80, "ones");
	double **B = create_two_dim_double(490, 360, "ones");

	for (int c = 1; c < 77; c++)
	  for (int b = 3; b < 356; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-1]+0.202;
	      
	      D[a]=D[a-5]+B[a][b];
	      
	      B[a][b]=B[a+4][b+4]*0.024+D[a]/A[a][b][c];
	      
	      A[a][b][c]=0.324;
	      
	      double var_a=A[a][b][c]-0.426;
	      double var_b=A[a+2][b][c+3]+0.097;
	    }

    return 0;
}