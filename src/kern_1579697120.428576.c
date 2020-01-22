#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(860, 630, 920, "zeros");
	double **B = create_two_dim_double(740, 790, "zeros");
	double ***A = create_three_dim_double(400, 970, 530, "zeros");
	double *C = create_one_dim_double(270, "zeros");

	for (int d = 3; d < 530; d++)
	  for (int c = 2; c < 790; c++)
	    for (int b = 4; b < 270; b++)
	      for (int a = 4; a < 270; a++)
	      {
	        
	       A[a][b][c]=A[a][b-2][c-3]*B[a][b]+D[a][b][c]-C[a];
	        
	       double var_a=A[a][b][c]*0.642;
	       double var_b=A[a-4][b-1][c-3]*0.68;
	        
	       D[a][b][c]=B[a][b]+A[a][b][c]*A[a][b][c];
	       C[a]=B[a+1][b]*D[a][b][c]-C[a]/A[a][b][c];
	        
	       double var_c=C[a]/0.248;
	       double var_d=C[a-2]+0.063;
	      }

    return 0;
}