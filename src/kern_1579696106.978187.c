#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(640, 970, 960, "ones");
	int *C = create_one_dim_int(460, "ones");
	int *A = create_one_dim_int(660, "ones");

	for (int c = 0; c < 960; c++)
	  for (int b = 0; b < 969; b++)
	    for (int a = 4; a < 458; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+1][c]/C[a]-A[a];
	      
	      int var_a=A[a]-14;
	      int var_b=A[a+5]/11;
	      
	      C[a]=A[a]*29;
	      B[a][b][c]=A[a-4]-C[a]/B[a][b][c];
	      
	      A[a]=C[a]*B[a][b][c]-33;
	      A[a]=C[a+2]-B[a][b][c];
	    }

    return 0;
}