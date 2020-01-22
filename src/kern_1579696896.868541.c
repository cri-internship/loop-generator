#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(360, 960, 810, "random");
	float **B = create_two_dim_float(30, 870, "random");

	for (int b = 5; b < 868; b++)
	  for (int a = 5; a < 25; a++)
	  {
	    
	     B[a][b]=B[a+4][b]-0.936;
	    
	     A[a][b][a]=0.379;
	     A[a][b-3][a-5]=0.513;
	    
	     A[a][b][a]=B[a][b];
	    
	     B[a][b]=0.567;
	  }

    return 0;
}