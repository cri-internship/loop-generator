#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(850, 130, 360, "zeros");
	int ***B = create_three_dim_int(170, 360, 920, "zeros");
	int *E = create_one_dim_int(110, "zeros");
	int *D = create_one_dim_int(550, "zeros");
	int **C = create_two_dim_int(360, 60, "zeros");

	for (int c = 3; c < 920; c++)
	  for (int b = 5; b < 360; b++)
	    for (int a = 5; a < 107; a++)
	    {
	      
	      E[a]=E[a-5]/43;
	      
	      E[a]=E[a+3]*D[a]+B[a][b][c]/A[a][b][c]-C[a][b];
	      
	      int var_a=B[a][b][c]*0;
	      int var_b=B[a-2][b-5][c-3]-26;
	      
	      A[a][b][c]=E[a]*B[a][b][c]-A[a][b][c]+C[a][b];
	    }

    return 0;
}