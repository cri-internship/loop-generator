#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(200, "random");
	float ***A = create_three_dim_float(460, 330, 910, "random");
	float *D = create_one_dim_float(460, "random");
	float ***E = create_three_dim_float(370, 870, 630, "random");
	float *C = create_one_dim_float(720, "random");

	for (int c = 0; c < 910; c++)
	  for (int b = 0; b < 330; b++)
	    for (int a = 5; a < 199; a++)
	    {
	      
	      B[a]=B[a-3]-D[a]/0.346+E[a][b][c]*A[a][b][c];
	      
	      C[a]=C[a+5]+0.617;
	      
	      B[a]=0.398;
	      
	      float var_a=B[a]+0.768;
	      float var_b=B[a-2]/0.26;
	      
	      C[a]=B[a]*D[a];
	      D[a]=B[a-5]*A[a][b][c];
	      
	      float var_c=A[a][b][c]/0.095;
	      float var_d=A[a+3][b][c]*0.787;
	      
	      float var_e=D[a]*0.051;
	      float var_f=D[a-1]+0.014;
	    }

    return 0;
}