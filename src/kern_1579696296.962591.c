#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(800, 830, 120, "ones");
	double **D = create_two_dim_double(530, 420, "ones");
	double *C = create_one_dim_double(370, "ones");
	double **A = create_two_dim_double(780, 820, "ones");

	for (int d = 5; d < 420; d++)
	  for (int c = 3; c < 367; c++)
	    for (int b = 3; b < 367; b++)
	      for (int a = 3; a < 367; a++)
	      {
	        
	       D[a][b]=D[a][b-5]-0.254;
	        
	       D[a][b]=D[a-3][b-3]+0.183;
	        
	       C[a]=C[a+3]+D[a][b]*B[a][b][c];
	      }

    return 0;
}