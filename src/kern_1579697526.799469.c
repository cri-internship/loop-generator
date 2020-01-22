#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(380, 20, 60, "random");
	float **E = create_two_dim_float(300, 860, "random");
	float ***B = create_three_dim_float(200, 850, 230, "random");
	float *A = create_one_dim_float(580, "random");
	float **D = create_two_dim_float(250, 470, "random");

	for (int d = 0; d < 56; d++)
	  for (int c = 5; c < 16; c++)
	    for (int b = 5; b < 197; b++)
	      for (int a = 5; a < 197; a++)
	      {
	        
	       D[a][b]=D[a-5][b-2]-0.104;
	        
	       C[a][b][c]=C[a][b+4][c+4]*0.973;
	        
	       B[a][b][c]=B[a+3][b+5][c+5]+0.264;
	        
	       A[a]=A[a+5]/D[a][b]-0.413+E[a][b];
	        
	       D[a][b]=0.061;
	      }

    return 0;
}