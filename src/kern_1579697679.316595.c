#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(170, 240, "ones");
	int *E = create_one_dim_int(110, "ones");
	int **A = create_two_dim_int(950, 770, "ones");
	int ***D = create_three_dim_int(510, 680, 810, "ones");
	int ***B = create_three_dim_int(60, 730, 750, "ones");

	for (int c = 5; c < 750; c++)
	  for (int b = 4; b < 678; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c-1]*E[a]/40+C[a][b]-A[a][b];
	      
	      A[a][b]=A[a][b+3]*20;
	      
	      B[a][b][c]=D[a][b][c]-A[a][b]+C[a][b]*E[a];
	      
	      int var_a=D[a][b][c]-33;
	      int var_b=D[a-5][b-1][c-5]*12;
	      
	      E[a]=D[a][b][c]/B[a][b][c]+E[a];
	      A[a][b]=D[a+1][b+2][c+2]+E[a]/A[a][b]-17;
	      
	      int var_c=D[a][b][c]-35;
	      int var_d=D[a-3][b-2][c-1]+36;
	    }

    return 0;
}