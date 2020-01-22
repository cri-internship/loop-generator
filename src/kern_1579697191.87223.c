#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(40, 820, "zeros");
	float ***B = create_three_dim_float(340, 390, 810, "zeros");
	float *A = create_one_dim_float(880, "zeros");

	for (int b = 0; b < 386; b++)
	  for (int a = 2; a < 40; a++)
	  {
	    
	     B[a][b][a]=B[a+4][b+4][a+1]+0.587;
	    
	     C[a][b]=0.799;
	     C[a-2][b]=0.501;
	  }

    return 0;
}