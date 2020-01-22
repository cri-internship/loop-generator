#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(560, 880, "random");
	float **A = create_two_dim_float(190, 200, "random");
	float ***C = create_three_dim_float(170, 30, 880, "random");

	for (int d = 1; d < 879; d++)
	  for (int c = 0; c < 25; c++)
	    for (int b = 4; b < 166; b++)
	      for (int a = 4; a < 166; a++)
	      {
	        
	       A[a][b]=A[a+5][b+5]+0.551;
	        
	       C[a][b][c]=C[a+4][b+5][c+1]+0.182;
	        
	       B[a][b]=0.891;
	       B[a+5][b+1]=0.111;
	        
	       B[a][b]=0.133;
	        
	       float var_a=C[a][b][c]+0.491;
	       float var_b=C[a-4][b][c-1]+0.844;
	      }

    return 0;
}