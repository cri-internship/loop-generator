#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(250, 910, 710, "random");
	int ***B = create_three_dim_int(940, 740, 180, "random");
	int *D = create_one_dim_int(480, "random");
	int *A = create_one_dim_int(710, "random");

	for (int c = 3; c < 180; c++)
	  for (int b = 5; b < 740; b++)
	    for (int a = 2; a < 247; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-5][c]+A[a]/B[a][b][c];
	      
	      C[a][b][c]=C[a-1][b-1][c-3]+33;
	      
	      D[a]=D[a+1]+7;
	      
	      B[a][b][c]=C[a][b][c];
	      B[a-2][b-2][c]=D[a]/A[a]-C[a][b][c];
	      
	      int var_a=A[a]+37;
	      int var_b=A[a+4]-13;
	    }

    return 0;
}