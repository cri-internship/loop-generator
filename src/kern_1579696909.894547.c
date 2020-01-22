#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 600, 550, "random");
	float **B = create_two_dim_float(210, 310, "random");

	for (int d = 2; d < 547; d++)
	  for (int c = 4; c < 307; c++)
	    for (int b = 4; b < 209; b++)
	      for (int a = 4; a < 209; a++)
	      {
	        
	       B[a][b]=A[a][b][c];
	       B[a-3][b-3]=A[a][b][c];
	        
	       B[a][b]=B[a][b]-A[a][b][c];
	       A[a][b][c]=B[a+1][b+3]/0.929;
	        
	       B[a][b]=A[a][b][c]/B[a][b];
	       B[a][b]=A[a-4][b-4][c]+B[a][b];
	        
	       A[a][b][c]=A[a][b][c]-B[a][b];
	       A[a][b][c]=A[a][b+5][c+3]-0.899;
	        
	       A[a][b][c]=B[a][b]-A[a][b][c];
	       B[a][b]=B[a+1][b]+0.295;
	        
	       float var_a=A[a][b][c]*0.982;
	       float var_b=A[a-3][b-4][c-2]/0.521;
	      }

    return 0;
}