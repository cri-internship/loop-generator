#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(730, 440, "zeros");
	float ***B = create_three_dim_float(820, 470, 910, "zeros");
	float *C = create_one_dim_float(150, "zeros");
	float ***A = create_three_dim_float(650, 290, 490, "zeros");

	for (int b = 5; b < 286; b++)
	  for (int a = 4; a < 149; a++)
	  {
	    
	     D[a][b]=D[a][b-5]*A[a][b][a]-B[a][b][a];
	    
	     float var_a=C[a]+0.859;
	     C[a]=0.674;
	    
	     C[a]=D[a][b]*B[a][b][a];
	    
	     A[a][b][a]=C[a]-B[a][b][a]*D[a][b];
	     A[a][b+4][a+3]=D[a][b];
	    
	     float var_b=A[a][b][a]-0.934;
	     float var_c=A[a][b-4][a-4]/0.585;
	    
	     float var_d=D[a][b]*0.718;
	     float var_e=D[a-4][b-1]+0.88;
	  }

    return 0;
}