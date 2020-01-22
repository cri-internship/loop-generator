#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(170, 850, 390, "zeros");
	int *E = create_one_dim_int(90, "zeros");
	int *D = create_one_dim_int(460, "zeros");
	int *B = create_one_dim_int(70, "zeros");
	int *A = create_one_dim_int(880, "zeros");

	for (int c = 4; c < 70; c++)
	  for (int b = 4; b < 70; b++)
	    for (int a = 4; a < 70; a++)
	    {
	      
	      D[a]=D[a+1]/45;
	      
	      D[a]=D[a+5]-30;
	      
	      B[a]=3;
	      B[a-2]=38;
	      
	      E[a]=C[a][b][c]/A[a]*B[a]+0;
	      E[a+3]=C[a][b][c];
	      
	      int var_a=D[a]/3;
	      int var_b=D[a-4]-13;
	      
	      E[a]=A[a]/E[a];
	      B[a]=A[a+1]+C[a][b][c]-B[a]*D[a];
	    }

    return 0;
}