#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(770, 770, 860, "zeros");
	double ***A = create_three_dim_double(390, 260, 750, "zeros");
	double *B = create_one_dim_double(110, "zeros");
	double ***D = create_three_dim_double(970, 940, 340, "zeros");

	for (int c = 5; c < 337; c++)
	  for (int b = 5; b < 260; b++)
	    for (int a = 4; a < 110; a++)
	    {
	      
	      B[a]=B[a-3]-A[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-5][c-5]-0.505+D[a][b][c];
	      
	      D[a][b][c]=D[a+2][b+2][c+1]-C[a][b][c]+A[a][b][c];
	      
	      C[a][b][c]=B[a];
	      C[a-4][b-1][c-1]=A[a][b][c];
	      
	      double var_a=D[a][b][c]-0.167;
	      double var_b=D[a+5][b][c+3]*0.496;
	    }

    return 0;
}