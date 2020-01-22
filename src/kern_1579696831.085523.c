#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(690, 940, "random");
	float **E = create_two_dim_float(600, 30, "random");
	float ***D = create_three_dim_float(770, 130, 200, "random");
	float ***A = create_three_dim_float(830, 610, 590, "random");
	float *C = create_one_dim_float(630, "random");

	for (int d = 5; d < 195; d++)
	  for (int c = 4; c < 125; c++)
	    for (int b = 4; b < 630; b++)
	      for (int a = 4; a < 630; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-3]*C[a]+B[a][b]-E[a][b];
	        
	       D[a][b][c]=D[a+4][b+5][c+4]+0.125;
	        
	       C[a]=0.346;
	       C[a]=A[a][b][c]-E[a][b]+B[a][b];
	        
	       D[a][b][c]=0.167;
	        
	       B[a][b]=C[a]+E[a][b]*D[a][b][c];
	       D[a][b][c]=C[a-4]/D[a][b][c]*B[a][b]+E[a][b];
	        
	       C[a]=D[a][b][c]+C[a];
	       E[a][b]=D[a-3][b-4][c-5]/C[a]*E[a][b]-A[a][b][c]+B[a][b];
	        
	       float var_a=B[a][b]*0.414;
	       float var_b=B[a-1][b-1]+0.055;
	      }

    return 0;
}