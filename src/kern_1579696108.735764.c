#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(80, 820, 890, "random");
	double *C = create_one_dim_double(920, "random");
	double ***A = create_three_dim_double(300, 190, 60, "random");
	double ***B = create_three_dim_double(790, 460, 290, "random");
	double ***E = create_three_dim_double(160, 440, 320, "random");

	for (int d = 3; d < 887; d++)
	  for (int c = 4; c < 817; c++)
	    for (int b = 4; b < 79; b++)
	      for (int a = 4; a < 79; a++)
	      {
	        
	       C[a]=C[a-2]*0.25;
	        
	       A[a][b][c]=C[a]-A[a][b][c]*0.251;
	        
	       D[a][b][c]=D[a+1][b+3][c+3]+0.89;
	        
	       double var_a=D[a][b][c]-0.646;
	       double var_b=D[a-4][b-4][c-3]*0.031;
	      }

    return 0;
}