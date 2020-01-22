#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(850, 920, "random");
	float ***A = create_three_dim_float(210, 560, 980, "random");
	float ***B = create_three_dim_float(460, 140, 700, "random");

	for (int b = 0; b < 140; b++)
	  for (int a = 0; a < 205; a++)
	  {
	    
	     B[a][b][a]=0.742;
	     float  var_a=B[a][b][a]*0.085;
	    
	     A[a][b][a]=A[a][b+4][a+5]+B[a][b][a];
	    
	     C[a][b]=C[a+5][b+3]-A[a][b][a];
	  }

    return 0;
}