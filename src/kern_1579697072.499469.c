#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(150, 330, "random");
	float ***C = create_three_dim_float(960, 680, 730, "random");
	float ***B = create_three_dim_float(410, 760, 220, "random");
	float *A = create_one_dim_float(890, "random");

	for (int b = 2; b < 680; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     A[a]=C[a][b][a];
	     A[a+4]=B[a][b][a];
	    
	     float var_a=C[a][b][a]*0.507;
	     float var_b=C[a-1][b-2][a-2]+0.885;
	    
	     A[a]=B[a][b][a]/D[a][b]*A[a];
	     C[a][b][a]=B[a-5][b-2][a-3]*C[a][b][a]/A[a]+0.508;
	    
	     float var_c=C[a][b][a]+0.763;
	     float var_d=C[a-1][b-2][a-4]+0.638;
	  }

    return 0;
}