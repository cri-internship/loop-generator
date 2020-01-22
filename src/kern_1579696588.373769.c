#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 170, "ones");
	float **D = create_two_dim_float(1000, 190, "ones");
	float **A = create_two_dim_float(250, 530, "ones");
	float ***C = create_three_dim_float(1000, 230, 480, "ones");
	float **E = create_two_dim_float(740, 710, "ones");

	for (int b = 0; b < 168; b++)
	  for (int a = 0; a < 245; a++)
	  {
	    
	     A[a][b]=A[a+2][b]/0.323;
	    
	     B[a][b]=0.977;
	     B[a+2][b+2]=0.595;
	    
	     A[a][b]=C[a][b][a]-B[a][b];
	  }

    return 0;
}