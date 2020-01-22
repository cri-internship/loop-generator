#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(20, 150, "ones");
	float ***D = create_three_dim_float(300, 270, 430, "ones");
	float *E = create_one_dim_float(980, "ones");
	float ***B = create_three_dim_float(830, 270, 700, "ones");
	float **A = create_two_dim_float(960, 530, "ones");

	for (int b = 0; b < 150; b++)
	  for (int a = 0; a < 17; a++)
	  {
	    
	     float var_a=E[a]+0.859;
	     E[a]=0.058;
	    
	     A[a][b]=A[a+5][b+1]/0.871;
	    
	     D[a][b][a]=C[a][b]-B[a][b][a]+D[a][b][a]*E[a];
	     C[a][b]=C[a+3][b]*A[a][b]+E[a]-A[a][b]/D[a][b][a];
	  }

    return 0;
}