#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(530, 790, 330, "random");
	float **D = create_two_dim_float(660, 560, "random");
	float ***B = create_three_dim_float(610, 920, 660, "random");
	float *A = create_one_dim_float(650, "random");

	for (int b = 2; b < 560; b++)
	  for (int a = 5; a < 526; a++)
	  {
	    
	     D[a][b]=D[a-5][b-1]*0.407;
	    
	     D[a][b]=D[a-4][b-2]-C[a][b][a]*B[a][b][a]+A[a];
	    
	     D[a][b]=A[a]-D[a][b]/0.259+B[a][b][a];
	     A[a]=B[a][b][a]/C[a][b][a]-D[a][b];
	    
	     float var_a=A[a]/0.405;
	     float var_b=A[a-5]+0.656;
	    
	     A[a]=C[a][b][a]/A[a]-B[a][b][a];
	     C[a][b][a]=C[a+4][b+5][a+4]/B[a][b][a]+D[a][b];
	    
	     float var_c=D[a][b]-0.886;
	     float var_d=D[a-4][b]-0.131;
	  }

    return 0;
}