#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(510, "ones");
	float *D = create_one_dim_float(750, "ones");
	float ***A = create_three_dim_float(660, 840, 150, "ones");
	float *C = create_one_dim_float(70, "ones");
	float *B = create_one_dim_float(620, "ones");

	for (int c = 0; c < 145; c++)
	  for (int b = 0; b < 839; b++)
	    for (int a = 0; a < 67; a++)
	    {
	      
	      D[a]=C[a]-D[a]/B[a];
	      E[a]=C[a+3]-A[a][b][c]/E[a]*E[a];
	      
	      C[a]=A[a][b][c]-C[a]/D[a]+B[a]*E[a];
	      B[a]=A[a+4][b+1][c+5]-E[a];
	    }

    return 0;
}