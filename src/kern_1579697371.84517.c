#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(900, "random");
	float ***D = create_three_dim_float(70, 800, 540, "random");
	float ***C = create_three_dim_float(270, 630, 720, "random");
	float **A = create_two_dim_float(650, 940, "random");
	float **B = create_two_dim_float(580, 840, "random");

	for (int d = 5; d < 720; d++)
	  for (int c = 4; c < 630; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       B[a][b]=C[a][b][c]+D[a][b][c]/B[a][b]*E[a]-A[a][b];
	       C[a][b][c]=C[a-5][b-4][c-5]+D[a][b][c]/A[a][b]-E[a]*B[a][b];
	      }

    return 0;
}