#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(910, 890, 450, "random");
	float **A = create_two_dim_float(140, 740, "random");
	float ***D = create_three_dim_float(790, 920, 100, "random");
	float *C = create_one_dim_float(820, "random");

	for (int b = 1; b < 740; b++)
	  for (int a = 1; a < 140; a++)
	  {
	    
	     C[a]=C[a-1]*A[a][b];
	    
	     B[a][b][a]=B[a][b][a-1]+C[a]-0.902;
	    
	     C[a]=0.907;
	    
	     B[a][b][a]=D[a][b][a]*A[a][b];
	    
	     A[a][b]=B[a][b][a]/C[a]+D[a][b][a];
	     A[a][b-1]=B[a][b][a]-D[a][b][a];
	  }

    return 0;
}