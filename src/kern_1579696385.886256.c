#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(420, "random");
	float *E = create_one_dim_float(550, "random");
	float *B = create_one_dim_float(670, "random");
	float *A = create_one_dim_float(400, "random");
	float ***D = create_three_dim_float(600, 910, 470, "random");

	for (int c = 4; c < 470; c++)
	  for (int b = 4; b < 910; b++)
	    for (int a = 5; a < 397; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-4][c-4]/C[a]+B[a]-A[a];
	      
	      A[a]=E[a]/D[a][b][c]-C[a]*D[a][b][c]+0.576;
	      E[a]=B[a]+A[a];
	      
	      A[a]=A[a+3]-0.657;
	    }

    return 0;
}