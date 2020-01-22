#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(790, "random");
	float **D = create_two_dim_float(740, 800, "random");
	float *B = create_one_dim_float(370, "random");
	float **C = create_two_dim_float(820, 930, "random");

	for (int b = 0; b < 800; b++)
	  for (int a = 2; a < 365; a++)
	  {
	    
	     D[a][b]=0.134;
	     D[a+5][b]=0.894;
	    
	     B[a]=0.108;
	     B[a+5]=0.302;
	    
	     A[a]=A[a]*0.863-C[a][b]+B[a];
	     C[a][b]=A[a-2]/C[a][b]*B[a];
	    
	     B[a]=C[a][b]/A[a];
	     D[a][b]=C[a+5][b]-A[a]*B[a];
	  }

    return 0;
}