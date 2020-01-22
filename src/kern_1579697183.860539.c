#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 170, 530, "zeros");
	double *B = create_one_dim_double(850, "zeros");
	double **C = create_two_dim_double(710, 750, "zeros");

	for (int c = 0; c < 529; c++)
	  for (int b = 0; b < 166; b++)
	    for (int a = 3; a < 706; a++)
	    {
	      
	      B[a]=B[a-3]+A[a][b][c]/C[a][b];
	      
	      A[a][b][c]=A[a+5][b+1][c+1]-0.218;
	      
	      C[a][b]=C[a+4][b+2]/B[a];
	      
	      C[a][b]=0.43;
	      
	      double var_a=C[a][b]+0.513;
	      
	      double var_c=A[a][b][c]+0.547;
	      double var_d=A[a+5][b+4][c]-0.194;
	    }

    return 0;
}