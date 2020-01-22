#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(850, 610, "random");
	float ***C = create_three_dim_float(60, 730, 620, "random");
	float ***B = create_three_dim_float(330, 400, 170, "random");

	for (int b = 2; b < 730; b++)
	  for (int a = 5; a < 56; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b-2][a-5]-0.489;
	    
	     C[a][b][a]=C[a][b][a]-B[a][b][a]/A[a][b];
	     B[a][b][a]=C[a+3][b][a+4]+A[a][b]*0.651;
	  }

    return 0;
}