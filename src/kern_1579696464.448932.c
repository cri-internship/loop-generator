#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(130, "ones");
	double *D = create_one_dim_double(220, "ones");
	double ***B = create_three_dim_double(560, 510, 810, "ones");
	double ***A = create_three_dim_double(950, 460, 630, "ones");
	double ***C = create_three_dim_double(620, 30, 800, "ones");

	for (int d = 0; d < 630; d++)
	  for (int c = 0; c < 458; c++)
	    for (int b = 3; b < 216; b++)
	      for (int a = 3; a < 216; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+2][c]/E[a]+C[a][b][c]-B[a][b][c]*D[a];
	        
	       D[a]=D[a+4]/0.122;
	        
	       A[a][b][c]=B[a][b][c]/A[a][b][c]*D[a]-A[a][b][c];
	       D[a]=B[a+2][b][c+1]/E[a]+0.895;
	        
	       double var_a=D[a]-0.84;
	       double var_b=D[a-3]*0.079;
	      }

    return 0;
}