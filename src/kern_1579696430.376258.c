#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(570, 40, 430, "random");
	float **C = create_two_dim_float(350, 850, "random");
	float ***B = create_three_dim_float(730, 400, 410, "random");
	float ***E = create_three_dim_float(120, 790, 910, "random");
	float *D = create_one_dim_float(720, "random");

	for (int d = 2; d < 430; d++)
	  for (int c = 5; c < 38; c++)
	    for (int b = 3; b < 570; b++)
	      for (int a = 3; a < 570; a++)
	      {
	        
	       D[a]=D[a-2]-A[a][b][c];
	        
	       A[a][b][c]=A[a-3][b-5][c-2]*C[a][b]+E[a][b][c]-D[a]/B[a][b][c];
	        
	       A[a][b][c]=A[a][b+2][c]+E[a][b][c]*B[a][b][c]-C[a][b]/D[a];
	      }

    return 0;
}