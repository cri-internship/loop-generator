#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 320, 150, "random");
	float **D = create_two_dim_float(20, 580, "random");
	float **C = create_two_dim_float(690, 370, "random");
	float *B = create_one_dim_float(850, "random");

	for (int d = 2; d < 147; d++)
	  for (int c = 5; c < 317; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       C[a][b]=C[a-4][b-1]-D[a][b]*A[a][b][c];
	        
	       B[a]=B[a+5]+C[a][b];
	        
	       A[a][b][c]=0.971;
	       A[a+2][b+1][c+1]=0.503;
	        
	       C[a][b]=B[a]/A[a][b][c];
	        
	       float var_a=D[a][b]-0.245;
	       float var_b=D[a-4][b-5]+0.251;
	        
	       C[a][b]=A[a][b][c]+0.566-B[a]/D[a][b];
	       B[a]=A[a-2][b-1][c-2]/D[a][b];
	        
	       A[a][b][c]=A[a][b][c]-B[a]+C[a][b]/D[a][b];
	       D[a][b]=A[a+1][b+3][c+3]/B[a];
	      }

    return 0;
}