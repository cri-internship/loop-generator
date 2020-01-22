#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(70, 160, 60, "zeros");
	float *C = create_one_dim_float(70, "zeros");
	float ***B = create_three_dim_float(460, 70, 580, "zeros");

	for (int d = 0; d < 576; d++)
	  for (int c = 0; c < 70; c++)
	    for (int b = 0; b < 457; b++)
	      for (int a = 0; a < 457; a++)
	      {
	        
	       B[a][b][c]=0.482;
	       B[a+3][b][c+4]=0.245;
	      }

    return 0;
}