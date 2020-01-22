#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(390, 230, 620, "random");
	float **A = create_two_dim_float(820, 710, "random");
	float **C = create_two_dim_float(510, 880, "random");
	float *E = create_one_dim_float(790, "random");
	float **B = create_two_dim_float(450, 70, "random");

	for (int b = 2; b < 70; b++)
	  for (int a = 1; a < 450; a++)
	  {
	    
	     B[a][b]=C[a][b]*E[a]+D[a][b][a]-A[a][b];
	     B[a-1][b-2]=D[a][b][a]-C[a][b];
	    
	     D[a][b][a]=C[a][b]-B[a][b]+A[a][b];
	     B[a][b]=C[a+1][b+4]/E[a];
	  }

    return 0;
}