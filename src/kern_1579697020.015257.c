#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(490, 870, 780, "random");
	float ***A = create_three_dim_float(640, 570, 280, "random");
	float **D = create_two_dim_float(50, 890, "random");
	float ***E = create_three_dim_float(740, 830, 820, "random");
	float *B = create_one_dim_float(700, "random");

	for (int d = 0; d < 817; d++)
	  for (int c = 0; c < 830; c++)
	    for (int b = 4; b < 50; b++)
	      for (int a = 4; a < 50; a++)
	      {
	        
	       B[a]=E[a][b][c];
	       D[a][b]=B[a]+D[a][b]-A[a][b][c];
	        
	       B[a]=B[a-4]*0.582;
	        
	       E[a][b][c]=E[a+1][b][c+3]*B[a];
	        
	       D[a][b]=D[a][b+1]+C[a][b][c]*C[a][b][c]-B[a]/E[a][b][c];
	      }

    return 0;
}