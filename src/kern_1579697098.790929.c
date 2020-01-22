#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(150, "random");
	float ***D = create_three_dim_float(460, 630, 580, "random");
	float *E = create_one_dim_float(830, "random");
	float **C = create_two_dim_float(290, 530, "random");
	float ***A = create_three_dim_float(70, 190, 960, "random");

	for (int d = 0; d < 577; d++)
	  for (int c = 5; c < 530; c++)
	    for (int b = 2; b < 290; b++)
	      for (int a = 2; a < 290; a++)
	      {
	        
	       C[a][b]=C[a-1][b-5]+E[a]*D[a][b][c];
	        
	       C[a][b]=C[a-2][b]+A[a][b][c]-B[a]*B[a];
	        
	       B[a]=E[a]+C[a][b];
	       E[a]=D[a][b][c]+C[a][b]-A[a][b][c]/B[a];
	        
	       E[a]=E[a+3]*0.809;
	        
	       D[a][b][c]=C[a][b]+E[a];
	       D[a+3][b+4][c+3]=B[a]/E[a];
	        
	       D[a][b][c]=A[a][b][c]/0.817-E[a]+B[a];
	      }

    return 0;
}