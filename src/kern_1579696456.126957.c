#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(590, 350, "random");
	float ***D = create_three_dim_float(820, 200, 360, "random");
	float ***C = create_three_dim_float(20, 630, 620, "random");
	float ***B = create_three_dim_float(130, 60, 150, "random");

	for (int d = 3; d < 150; d++)
	  for (int c = 3; c < 60; c++)
	    for (int b = 4; b < 17; b++)
	      for (int a = 4; a < 17; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-3][c-3]+A[a][b];
	        
	       C[a][b][c]=C[a+3][b+5][c+3]-0.164;
	        
	       C[a][b][c]=C[a+2][b+3][c+2]+0.764;
	        
	       C[a][b][c]=C[a][b][c+1]+0.648;
	        
	       float var_a=D[a][b][c]-0.778;
	       float var_b=D[a-2][b-3][c-3]-0.843;
	        
	       float var_c=D[a][b][c]/0.955;
	       float var_d=D[a+1][b+1][c+1]/0.491;
	        
	       D[a][b][c]=A[a][b]*D[a][b][c];
	       A[a][b]=A[a-4][b]*C[a][b][c]-B[a][b][c]+B[a][b][c];
	      }

    return 0;
}