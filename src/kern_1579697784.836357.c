#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(390, 320, "zeros");
	float ***C = create_three_dim_float(920, 290, 90, "zeros");
	float *A = create_one_dim_float(80, "zeros");
	float **D = create_two_dim_float(420, 920, "zeros");
	float ***E = create_three_dim_float(660, 570, 690, "zeros");

	for (int b = 3; b < 290; b++)
	  for (int a = 5; a < 77; a++)
	  {
	    
	     A[a]=A[a-3]-C[a][b][a]+E[a][b][a]/D[a][b]*B[a][b];
	    
	     A[a]=A[a+3]/0.9;
	    
	     B[a][b]=0.247;
	     B[a-2][b-3]=0.102;
	    
	     D[a][b]=0.124;
	     D[a][b-1]=0.233;
	    
	     float var_a=C[a][b][a]-0.226;
	     float var_b=C[a-3][b-1][a-5]-0.916;
	  }

    return 0;
}