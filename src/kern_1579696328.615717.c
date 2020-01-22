#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(740, 130, 90, "random");
	float **B = create_two_dim_float(820, 970, "random");
	float **D = create_two_dim_float(840, 230, "random");
	float ***C = create_three_dim_float(340, 170, 150, "random");

	for (int b = 0; b < 127; b++)
	  for (int a = 1; a < 340; a++)
	  {
	    
	     C[a][b][a]=C[a][b][a-1]-0.999;
	    
	     B[a][b]=C[a][b][a]*0.055;
	     C[a][b][a]=B[a][b]+A[a][b][a]*D[a][b];
	    
	     D[a][b]=B[a][b];
	     D[a+4][b+2]=B[a][b]-C[a][b][a];
	    
	     float var_a=A[a][b][a]/0.028;
	     float var_b=A[a+5][b+3][a+5]+0.41;
	  }

    return 0;
}