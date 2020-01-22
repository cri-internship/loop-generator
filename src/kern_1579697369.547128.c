#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(520, 530, 220, "ones");
	double *B = create_one_dim_double(530, "ones");
	double **D = create_two_dim_double(680, 680, "ones");
	double **C = create_two_dim_double(180, 190, "ones");

	for (int d = 0; d < 216; d++)
	  for (int c = 0; c < 190; c++)
	    for (int b = 0; b < 180; b++)
	      for (int a = 0; a < 180; a++)
	      {
	        
	       C[a][b]=B[a]+A[a][b][c]*D[a][b];
	       D[a][b]=C[a][b]*B[a];
	        
	       A[a][b][c]=A[a+2][b+2][c+2]*0.608;
	        
	       double var_a=A[a][b][c]-0.94;
	       double var_b=A[a+1][b+2][c+4]-0.947;
	        
	       double var_c=D[a][b]+0.06;
	       double var_d=D[a+4][b+4]+0.458;
	      }

    return 0;
}