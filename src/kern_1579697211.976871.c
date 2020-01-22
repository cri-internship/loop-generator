#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(670, 790, 460, "random");
	float **C = create_two_dim_float(900, 860, "random");
	float ***E = create_three_dim_float(280, 590, 980, "random");
	float ***D = create_three_dim_float(910, 720, 240, "random");
	float **A = create_two_dim_float(760, 300, "random");

	for (int d = 2; d < 296; d++)
	  for (int c = 3; c < 755; c++)
	    for (int b = 3; b < 755; b++)
	      for (int a = 3; a < 755; a++)
	      {
	        
	       C[a][b]=C[a-3][b-2]+0.808;
	        
	       A[a][b]=A[a+5][b+4]*B[a][b][c];
	        
	       E[a][b][c]=C[a][b]-0.987+A[a][b];
	      }

    return 0;
}