#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(300, "zeros");
	float ***B = create_three_dim_float(430, 20, 70, "zeros");

	for (int d = 0; d < 66; d++)
	  for (int c = 0; c < 16; c++)
	    for (int b = 0; b < 426; b++)
	      for (int a = 0; a < 426; a++)
	      {
	        
	       B[a][b][c]=B[a+4][b+4][c+4]*0.727;
	      }

    return 0;
}