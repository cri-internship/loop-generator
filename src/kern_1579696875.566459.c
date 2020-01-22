#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(380, 250, 470, "random");
	float ***B = create_three_dim_float(350, 500, 740, "random");
	float **A = create_two_dim_float(30, 810, "random");

	for (int b = 0; b < 809; b++)
	  for (int a = 0; a < 26; a++)
	  {
	    
	     A[a][b]=A[a+4][b+1]*0.054;
	  }

    return 0;
}