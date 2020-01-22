#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(470, 200, 240, "random");
	float **A = create_two_dim_float(210, 160, "random");

	for (int b = 0; b < 197; b++)
	  for (int a = 0; a < 467; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+3][a+3]+A[a][b];
	  }

    return 0;
}