#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(250, 350, "random");
	double **A = create_two_dim_double(230, 360, "random");
	double ***C = create_three_dim_double(220, 70, 10, "random");

	for (int d = 2; d < 9; d++)
	  for (int c = 2; c < 65; c++)
	    for (int b = 2; b < 217; b++)
	      for (int a = 2; a < 217; a++)
	      {
	        
	       C[a][b][c]=C[a+3][b+5][c+1]*A[a][b];
	        
	       double var_a=C[a][b][c]*0.12;
	       double var_b=C[a+1][b+3][c+1]*0.238;
	        
	       double var_c=B[a][b]-0.285;
	       double var_d=B[a-2][b-2]*0.338;
	        
	       double var_e=A[a][b]+0.841;
	       double var_f=A[a+5][b+3]-0.867;
	        
	       C[a][b][c]=C[a][b][c]*B[a][b];
	       B[a][b]=C[a-1][b-1][c-2]/A[a][b];
	      }

    return 0;
}