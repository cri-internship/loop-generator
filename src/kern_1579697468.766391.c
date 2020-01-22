#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(50, 550, "random");
	double **A = create_two_dim_double(270, 550, "random");
	double ***B = create_three_dim_double(860, 650, 230, "random");

	for (int d = 3; d < 230; d++)
	  for (int c = 0; c < 650; c++)
	    for (int b = 3; b < 860; b++)
	      for (int a = 3; a < 860; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b][c-3]+A[a][b];
	      }

    return 0;
}