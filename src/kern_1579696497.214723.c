#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(820, 150, 870, "random");
	float *D = create_one_dim_float(770, "random");
	float ***C = create_three_dim_float(570, 820, 970, "random");
	float ***A = create_three_dim_float(740, 750, 550, "random");
	float **E = create_two_dim_float(220, 590, "random");

	for (int d = 3; d < 545; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 5; b < 220; b++)
	      for (int a = 5; a < 220; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-4][c-3]/0.981;
	        
	       E[a][b]=E[a-2][b-5]*0.042;
	        
	       E[a][b]=E[a-5][b-2]/0.979;
	        
	       A[a][b][c]=0.956;
	       A[a+2][b][c+5]=0.561;
	        
	       float var_a=B[a][b][c]-0.397;
	       float var_b=B[a][b-2][c-2]+0.774;
	        
	       float var_c=C[a][b][c]*0.57;
	       float var_d=C[a-2][b-2][c-2]+0.599;
	      }

    return 0;
}