#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(50, 530, 420, "random");
	float ***A = create_three_dim_float(630, 980, 90, "random");
	float *B = create_one_dim_float(10, "random");
	float ***D = create_three_dim_float(690, 370, 500, "random");

	for (int d = 1; d < 90; d++)
	  for (int c = 1; c < 980; c++)
	    for (int b = 1; b < 10; b++)
	      for (int a = 1; a < 10; a++)
	      {
	        
	       B[a]=B[a-1]-C[a][b][c]+D[a][b][c]/A[a][b][c];
	        
	       A[a][b][c]=A[a][b-1][c-1]/B[a]*B[a];
	      }

    return 0;
}