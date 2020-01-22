#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(60, 670, "random");
	double **A = create_two_dim_double(20, 460, "random");
	double ***B = create_three_dim_double(720, 60, 210, "random");

	for (int d = 3; d < 210; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       A[a][b]=A[a-3][b-1]/0.536;
	        
	       B[a][b][c]=B[a-4][b-1][c-3]+0.572;
	        
	       double var_a=C[a][b]-0.883;
	       double var_b=C[a+3][b]*0.774;
	        
	       double var_c=C[a][b]*0.018;
	       double var_d=C[a-2][b-4]-0.736;
	      }

    return 0;
}