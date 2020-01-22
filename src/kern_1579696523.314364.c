#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(880, "zeros");
	float *C = create_one_dim_float(930, "zeros");
	float ***A = create_three_dim_float(960, 770, 410, "zeros");
	float *D = create_one_dim_float(630, "zeros");

	for (int c = 3; c < 627; c++)
	  for (int b = 3; b < 627; b++)
	    for (int a = 3; a < 627; a++)
	    {
	      
	      D[a]=D[a-1]-B[a];
	      
	      C[a]=D[a]-A[a][b][c]/D[a];
	      C[a-3]=D[a]-B[a];
	      
	      float var_a=C[a]/0.586;
	      float var_b=C[a+5]*0.345;
	      
	      float var_c=C[a]+0.683;
	      float var_d=C[a+1]*0.447;
	      
	      float var_e=B[a]+0.156;
	      
	      A[a][b][c]=D[a]/C[a]+A[a][b][c]-B[a];
	      D[a]=D[a+3]/B[a]-0.868;
	      
	      B[a]=B[a]+C[a];
	      C[a]=B[a+5]/C[a];
	    }

    return 0;
}