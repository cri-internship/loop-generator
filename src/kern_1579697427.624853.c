#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(830, 190, 10, "ones");
	double *C = create_one_dim_double(780, "ones");
	double **B = create_two_dim_double(980, 1000, "ones");

	for (int c = 4; c < 5; c++)
	  for (int b = 2; b < 185; b++)
	    for (int a = 4; a < 780; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-2][c-4]*0.531;
	      
	      C[a]=C[a-1]-0.286;
	      
	      A[a][b][c]=A[a][b+3][c+5]-C[a];
	      
	      A[a][b][c]=A[a+1][b+5][c+3]/B[a][b];
	      
	      double var_a=A[a][b][c]-0.908;
	      double var_b=A[a][b+1][c+2]/0.432;
	      
	      double var_c=B[a][b]-0.972;
	      double var_d=B[a][b-1]+0.74;
	    }

    return 0;
}