#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(350, 860, 500, "random");
	float **A = create_two_dim_float(980, 340, "random");
	float *C = create_one_dim_float(250, "random");
	float **B = create_two_dim_float(80, 960, "random");

	for (int c = 4; c < 500; c++)
	  for (int b = 5; b < 335; b++)
	    for (int a = 5; a < 80; a++)
	    {
	      
	      A[a][b]=C[a];
	      A[a+4][b+5]=0.417;
	      
	      D[a][b][c]=A[a][b]-C[a]+A[a][b];
	      D[a-5][b-5][c-2]=C[a]+B[a][b];
	      
	      float var_a=C[a]/0.974;
	      float var_b=C[a-3]-0.854;
	      
	      float var_c=D[a][b][c]*0.645;
	      float var_d=D[a-5][b-1][c]+0.795;
	      
	      float var_e=D[a][b][c]*0.887;
	      float var_f=D[a-4][b-4][c-4]/0.349;
	      
	      D[a][b][c]=B[a][b]-D[a][b][c];
	    }

    return 0;
}