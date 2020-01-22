#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 290, "random");
	float **D = create_two_dim_float(390, 50, "random");
	float **E = create_two_dim_float(310, 870, "random");
	float ***B = create_three_dim_float(880, 920, 490, "random");
	float **C = create_two_dim_float(90, 960, "random");

	for (int d = 0; d < 487; d++)
	  for (int c = 2; c < 50; c++)
	    for (int b = 2; b < 87; b++)
	      for (int a = 2; a < 87; a++)
	      {
	        
	       D[a][b]=D[a-2][b-2]*0.69;
	        
	       E[a][b]=E[a-2][b-2]/0.344;
	        
	       B[a][b][c]=B[a+2][b+4][c+2]-0.481;
	        
	       B[a][b][c]=C[a][b]*D[a][b]-E[a][b]/A[a][b];
	        
	       B[a][b][c]=C[a][b]*B[a][b][c]-B[a][b][c]/A[a][b]+E[a][b];
	       D[a][b]=C[a][b+4]*B[a][b][c];
	        
	       float var_a=B[a][b][c]-0.902;
	       float var_b=B[a+4][b+5][c+3]-0.584;
	        
	       float var_c=C[a][b]-0.621;
	       float var_d=C[a+3][b+5]+0.217;
	      }

    return 0;
}