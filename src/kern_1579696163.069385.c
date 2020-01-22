#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(120, 420, "random");
	float **D = create_two_dim_float(20, 820, "random");
	float **B = create_two_dim_float(1000, 550, "random");
	float ***A = create_three_dim_float(900, 780, 860, "random");

	for (int d = 3; d < 420; d++)
	  for (int c = 2; c < 118; c++)
	    for (int b = 2; b < 118; b++)
	      for (int a = 2; a < 118; a++)
	      {
	        
	       B[a][b]=B[a-2][b-3]-D[a][b]*A[a][b][c]/C[a][b];
	        
	       C[a][b]=C[a+2][b]*0.345;
	      }

    return 0;
}