#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(680, 740, "random");
	float **B = create_two_dim_float(870, 760, "random");
	float ***E = create_three_dim_float(180, 50, 770, "random");
	float ***A = create_three_dim_float(580, 220, 670, "random");
	float ***C = create_three_dim_float(410, 400, 580, "random");

	for (int d = 0; d < 576; d++)
	  for (int c = 1; c < 45; c++)
	    for (int b = 2; b < 176; b++)
	      for (int a = 2; a < 176; a++)
	      {
	        
	       D[a][b]=D[a-2][b-1]-A[a][b][c]+E[a][b][c];
	        
	       A[a][b][c]=A[a+2][b][c+4]*B[a][b]-C[a][b][c];
	        
	       A[a][b][c]=A[a][b+4][c+1]-0.821;
	        
	       C[a][b][c]=C[a+3][b+3][c+4]+D[a][b]-B[a][b]*D[a][b]/A[a][b][c];
	        
	       E[a][b][c]=E[a+4][b+5][c+2]*C[a][b][c]/B[a][b]-D[a][b];
	        
	       D[a][b]=E[a][b][c]/B[a][b]*C[a][b][c]-A[a][b][c];
	        
	       float var_a=D[a][b]/0.487;
	       float var_b=D[a][b+2]+0.744;
	      }

    return 0;
}