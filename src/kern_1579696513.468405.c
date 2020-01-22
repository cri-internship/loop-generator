#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(990, 830, "random");
	float ***C = create_three_dim_float(800, 940, 710, "random");
	float ***B = create_three_dim_float(680, 770, 520, "random");

	for (int d = 4; d < 520; d++)
	  for (int c = 5; c < 770; c++)
	    for (int b = 4; b < 680; b++)
	      for (int a = 4; a < 680; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-5][c-1]+0.387;
	        
	       A[a][b]=A[a-3][b-3]*C[a][b][c];
	        
	       B[a][b][c]=B[a-4][b-4][c]+0.666;
	        
	       A[a][b]=A[a][b+4]*0.427;
	        
	       C[a][b][c]=A[a][b]+0.087;
	       C[a+2][b][c]=B[a][b][c]+A[a][b];
	        
	       B[a][b][c]=C[a][b][c]-B[a][b][c];
	       C[a][b][c]=C[a-2][b-2][c-4]+A[a][b]/B[a][b][c];
	        
	       float var_a=A[a][b]/0.69;
	       float var_b=A[a-4][b]*0.241;
	      }

    return 0;
}