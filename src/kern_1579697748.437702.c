#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(620, "ones");
	float ***B = create_three_dim_float(820, 60, 880, "ones");
	float ***E = create_three_dim_float(440, 760, 660, "ones");
	float **C = create_two_dim_float(910, 910, "ones");
	float **A = create_two_dim_float(670, 300, "ones");

	for (int d = 0; d < 658; d++)
	  for (int c = 4; c < 300; c++)
	    for (int b = 5; b < 435; b++)
	      for (int a = 5; a < 435; a++)
	      {
	        
	       B[a][b][c]=A[a][b]/0.65*C[a][b]-E[a][b][c];
	       A[a][b]=B[a][b][c]/C[a][b]+E[a][b][c];
	        
	       E[a][b][c]=A[a][b]*D[a];
	       E[a+5][b+4][c+2]=C[a][b]/B[a][b][c];
	        
	       E[a][b][c]=A[a][b]*0.345/E[a][b][c];
	       D[a]=A[a-5][b-1]*C[a][b];
	        
	       float var_a=C[a][b]-0.09;
	       float var_b=C[a][b-4]+0.743;
	        
	       C[a][b]=C[a][b]/A[a][b]+B[a][b][c]-E[a][b][c];
	       A[a][b]=C[a-4][b-2]+B[a][b][c]*E[a][b][c];
	      }

    return 0;
}