#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(330, 500, 650, "random");
	double ***A = create_three_dim_double(130, 270, 270, "random");
	double **E = create_two_dim_double(320, 600, "random");
	double **C = create_two_dim_double(230, 50, "random");
	double ***B = create_three_dim_double(740, 810, 1000, "random");

	for (int d = 0; d < 995; d++)
	  for (int c = 2; c < 50; c++)
	    for (int b = 4; b < 230; b++)
	      for (int a = 4; a < 230; a++)
	      {
	        
	       E[a][b]=E[a-4][b-2]-0.954;
	        
	       B[a][b][c]=B[a][b+2][c+5]-0.162;
	        
	       double var_a=C[a][b]/0.083;
	       double var_b=C[a-2][b]-0.238;
	      }

    return 0;
}