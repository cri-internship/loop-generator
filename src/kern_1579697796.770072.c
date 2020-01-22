#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(630, 380, 690, "random");
	int *E = create_one_dim_int(400, "random");
	int *B = create_one_dim_int(940, "random");
	int *A = create_one_dim_int(680, "random");
	int *C = create_one_dim_int(70, "random");

	for (int c = 2; c < 690; c++)
	  for (int b = 1; b < 380; b++)
	    for (int a = 4; a < 66; a++)
	    {
	      
	      E[a]=B[a]*41;
	      B[a]=D[a][b][c]*A[a]/E[a];
	      
	      D[a][b][c]=B[a];
	      D[a-4][b-1][c-2]=14-C[a];
	      
	      B[a]=A[a];
	      
	      int var_a=B[a]*42;
	      int var_b=B[a+5]-12;
	      
	      int var_c=A[a]/21;
	      int var_d=A[a+2]*4;
	      
	      int var_e=C[a]/25;
	      int var_f=C[a+4]+36;
	    }

    return 0;
}