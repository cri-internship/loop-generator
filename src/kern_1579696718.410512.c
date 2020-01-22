#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(70, 840, "zeros");
	float **B = create_two_dim_float(830, 480, "zeros");
	float ***D = create_three_dim_float(970, 250, 430, "zeros");
	float ***A = create_three_dim_float(230, 220, 630, "zeros");

	for (int d = 4; d < 430; d++)
	  for (int c = 4; c < 250; c++)
	    for (int b = 5; b < 68; b++)
	      for (int a = 5; a < 68; a++)
	      {
	        
	       C[a][b]=C[a-1][b]*0.331;
	        
	       C[a][b]=C[a-2][b-4]+0.962/B[a][b]-A[a][b][c];
	        
	       C[a][b]=C[a+2][b+2]*0.986;
	        
	       D[a][b][c]=C[a][b]+0.433;
	       D[a-5][b-2][c-4]=B[a][b]-C[a][b];
	      }

    return 0;
}