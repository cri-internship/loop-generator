#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(100, 290, 320, "random");
	float **D = create_two_dim_float(550, 730, "random");
	float ***B = create_three_dim_float(770, 340, 180, "random");
	float **A = create_two_dim_float(570, 340, "random");

	for (int b = 5; b < 285; b++)
	  for (int a = 0; a < 95; a++)
	  {
	    
	     A[a][b]=A[a][b-5]-B[a][b][a]/D[a][b];
	    
	     C[a][b][a]=C[a+2][b+5][a+5]*A[a][b]+A[a][b]/D[a][b];
	    
	     A[a][b]=A[a+4][b]+0.97;
	  }

    return 0;
}