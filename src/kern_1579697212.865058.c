#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(890, 290, 420, "random");
	float ***A = create_three_dim_float(120, 400, 800, "random");
	float **C = create_two_dim_float(630, 250, "random");
	float **E = create_two_dim_float(80, 300, "random");
	float ***D = create_three_dim_float(260, 640, 830, "random");

	for (int d = 2; d < 416; d++)
	  for (int c = 3; c < 250; c++)
	    for (int b = 4; b < 80; b++)
	      for (int a = 4; a < 80; a++)
	      {
	        
	       E[a][b]=E[a-4][b-2]*0.941;
	        
	       A[a][b][c]=A[a-1][b-1][c-2]+0.32;
	        
	       C[a][b]=C[a-4][b]+0.701;
	        
	       B[a][b][c]=B[a][b+4][c+4]/0.954;
	        
	       B[a][b][c]=B[a+2][b+2][c+4]-0.032;
	      }

    return 0;
}