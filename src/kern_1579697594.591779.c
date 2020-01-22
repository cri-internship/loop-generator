#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(80, "random");
	int **C = create_two_dim_int(710, 320, "random");
	int **D = create_two_dim_int(610, 730, "random");
	int *A = create_one_dim_int(630, "random");
	int *B = create_one_dim_int(570, "random");

	for (int c = 4; c < 320; c++)
	  for (int b = 3; b < 80; b++)
	    for (int a = 3; a < 80; a++)
	    {
	      
	      C[a][b]=C[a-3][b-3]+1;
	      
	      D[a][b]=D[a-3][b-4]+25;
	      
	      B[a]=B[a-1]-20;
	      
	      A[a]=A[a-1]-B[a]/D[a][b];
	      
	      int var_a=E[a]*26;
	      int var_b=E[a-2]+7;
	    }

    return 0;
}