#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(240, "random");
	float ***D = create_three_dim_float(350, 190, 920, "random");
	float ***A = create_three_dim_float(280, 970, 120, "random");
	float *E = create_one_dim_float(980, "random");
	float ***C = create_three_dim_float(740, 280, 270, "random");

	for (int c = 1; c < 265; c++)
	  for (int b = 5; b < 276; b++)
	    for (int a = 5; a < 737; a++)
	    {
	      
	      C[a][b][c]=C[a+3][b+4][c+5]+B[a]/D[a][b][c]*E[a];
	      
	      C[a][b][c]=C[a+2][b+1][c+2]+0.929;
	      
	      C[a][b][c]=C[a+3][b+1][c+3]+A[a][b][c]*B[a]-E[a];
	      
	      float var_a=E[a]*0.21;
	      E[a]=0.605;
	      
	      float var_b=E[a]/0.685;
	      float var_c=E[a-5]-0.009;
	    }

    return 0;
}