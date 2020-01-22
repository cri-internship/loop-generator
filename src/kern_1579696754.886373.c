#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(250, 580, "random");
	double **D = create_two_dim_double(260, 500, "random");
	double ***B = create_three_dim_double(30, 30, 570, "random");
	double ***A = create_three_dim_double(970, 830, 910, "random");
	double *E = create_one_dim_double(480, "random");

	for (int d = 4; d < 566; d++)
	  for (int c = 0; c < 25; c++)
	    for (int b = 3; b < 30; b++)
	      for (int a = 3; a < 30; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b][c-4]+0.102;
	        
	       B[a][b][c]=B[a][b+5][c+4]/0.678;
	      }

    return 0;
}