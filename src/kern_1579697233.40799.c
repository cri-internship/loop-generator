#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(570, 560, "random");
	float ***A = create_three_dim_float(70, 890, 970, "random");
	float *B = create_one_dim_float(20, "random");

	for (int d = 5; d < 965; d++)
	  for (int c = 4; c < 555; c++)
	    for (int b = 3; b < 65; b++)
	      for (int a = 3; a < 65; a++)
	      {
	        
	       A[a][b][c]=0.939;
	       A[a+2][b+4][c+5]=0.042;
	        
	       A[a][b][c]=0.175;
	        
	       C[a][b]=A[a][b][c]+B[a];
	       C[a+3][b+4]=0.897/A[a][b][c];
	        
	       C[a][b]=A[a][b][c]/B[a];
	        
	       A[a][b][c]=C[a][b]/A[a][b][c]+B[a];
	       B[a]=C[a+4][b+5]*A[a][b][c]-B[a];
	        
	       float var_a=A[a][b][c]-0.898;
	       float var_b=A[a-3][b][c-5]*0.367;
	        
	       float var_c=A[a][b][c]*0.013;
	       float var_d=A[a+5][b+4][c+4]*0.386;
	      }

    return 0;
}