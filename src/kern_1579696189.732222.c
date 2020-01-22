#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(700, 710, 190, "ones");
	int **E = create_two_dim_int(340, 250, "ones");
	int *D = create_one_dim_int(900, "ones");
	int *A = create_one_dim_int(10, "ones");
	int **C = create_two_dim_int(40, 400, "ones");

	for (int c = 0; c < 186; c++)
	  for (int b = 0; b < 397; b++)
	    for (int a = 1; a < 7; a++)
	    {
	      
	      D[a]=D[a-1]-A[a]/C[a][b]+E[a][b]*B[a][b][c];
	      
	      C[a][b]=C[a+5][b+3]*17;
	      
	      D[a]=D[a+3]*48;
	      
	      A[a]=D[a]/C[a][b];
	      A[a+3]=D[a]+B[a][b][c]/C[a][b]-13;
	      
	      B[a][b][c]=C[a][b]+25/A[a];
	      B[a+3][b][c+4]=A[a]-35;
	      
	      int var_a=A[a]-30;
	      int var_b=A[a+2]*30;
	      
	      int var_c=C[a][b]-13;
	      int var_d=C[a+1][b+1]/12;
	    }

    return 0;
}