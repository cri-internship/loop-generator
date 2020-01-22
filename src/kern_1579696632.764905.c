#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(760, 620, 420, "random");
	float **A = create_two_dim_float(630, 700, "random");

	for (int d = 1; d < 420; d++)
	  for (int c = 4; c < 620; c++)
	    for (int b = 5; b < 627; b++)
	      for (int a = 5; a < 627; a++)
	      {
	        
	       B[a][b][c]=0.806;
	       B[a-5][b-4][c-1]=0.337;
	        
	       float var_a=A[a][b]+0.339;
	       float var_b=A[a+3][b+4]+0.81;
	      }

    return 0;
}