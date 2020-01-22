#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(750, "random");
	float ***A = create_three_dim_float(520, 600, 20, "random");
	float ***C = create_three_dim_float(450, 20, 370, "random");
	float **D = create_two_dim_float(260, 690, "random");

	for (int c = 0; c < 20; c++)
	  for (int b = 0; b < 17; b++)
	    for (int a = 3; a < 445; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+3][c+3]*D[a][b]-A[a][b][c];
	      
	      B[a]=C[a][b][c];
	      B[a-2]=0.936*D[a][b];
	      
	      C[a][b][c]=0.918;
	      
	      B[a]=0.071;
	      
	      float var_a=A[a][b][c]-0.141;
	      float var_b=A[a][b+2][c]/0.333;
	    }

    return 0;
}