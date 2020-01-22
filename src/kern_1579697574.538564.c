#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(290, 80, "zeros");
	float **B = create_two_dim_float(740, 780, "zeros");
	float ***C = create_three_dim_float(510, 90, 550, "zeros");

	for (int b = 5; b < 80; b++)
	  for (int a = 0; a < 290; a++)
	  {
	    
	     A[a][b]=C[a][b][a]*0.805;
	     A[a][b]=A[a][b]*C[a][b][a]+B[a][b];
	    
	     B[a][b]=A[a][b]+A[a][b];
	     B[a][b-5]=C[a][b][a]-A[a][b];
	  }

    return 0;
}