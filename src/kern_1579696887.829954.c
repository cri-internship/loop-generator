#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(730, "random");
	double ***B = create_three_dim_double(250, 920, 90, "random");
	double *A = create_one_dim_double(470, "random");
	double **C = create_two_dim_double(770, 360, "random");
	double *D = create_one_dim_double(550, "random");

	for (int d = 5; d < 360; d++)
	  for (int c = 3; c < 546; c++)
	    for (int b = 3; b < 546; b++)
	      for (int a = 3; a < 546; a++)
	      {
	        
	       E[a]=E[a-2]-B[a][b][c];
	        
	       C[a][b]=C[a-2][b-3]/0.796;
	        
	       D[a]=0.343;
	       D[a-3]=0.633;
	        
	       double var_a=D[a]-0.49;
	       double var_b=D[a+4]+0.709;
	        
	       double var_c=C[a][b]-0.861;
	       double var_d=C[a-1][b-5]-0.442;
	      }

    return 0;
}