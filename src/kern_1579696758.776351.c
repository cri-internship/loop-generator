#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(90, 450, 210, "random");
	float **A = create_two_dim_float(40, 810, "random");

	for (int b = 5; b < 447; b++)
	  for (int a = 4; a < 40; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-5][a-1]*0.182;
	    
	     B[a][b][a]=B[a+4][b+3][a+5]/0.058;
	    
	     A[a][b]=0.83;
	     A[a-3][b-5]=B[a][b][a];
	    
	     B[a][b][a]=A[a][b]*B[a][b][a];
	     A[a][b]=A[a-1][b-1]+B[a][b][a];
	  }

    return 0;
}