#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(290, "zeros");
	float ***E = create_three_dim_float(90, 330, 80, "zeros");
	float **C = create_two_dim_float(10, 30, "zeros");
	float ***A = create_three_dim_float(350, 200, 650, "zeros");
	float **D = create_two_dim_float(770, 800, "zeros");

	for (int d = 2; d < 800; d++)
	  for (int c = 5; c < 287; c++)
	    for (int b = 5; b < 287; b++)
	      for (int a = 5; a < 287; a++)
	      {
	        
	       B[a]=B[a+3]+0.616;
	        
	       D[a][b]=E[a][b][c];
	       D[a-5][b-2]=0.777-B[a];
	      }

    return 0;
}