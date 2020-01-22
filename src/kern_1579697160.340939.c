#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(910, "random");
	int ***E = create_three_dim_int(430, 800, 1000, "random");
	int *A = create_one_dim_int(540, "random");
	int *B = create_one_dim_int(830, "random");
	int **C = create_two_dim_int(160, 180, "random");

	for (int c = 3; c < 996; c++)
	  for (int b = 0; b < 176; b++)
	    for (int a = 5; a < 158; a++)
	    {
	      
	      E[a][b][c]=E[a-5][b][c-3]+D[a]/C[a][b]*A[a]-B[a];
	      
	      C[a][b]=33;
	      C[a+2][b+2]=9;
	      
	      int var_a=E[a][b][c]*20;
	      int var_b=E[a+3][b+5][c+4]-32;
	      
	      int var_c=C[a][b]-46;
	      int var_d=C[a][b+4]+39;
	    }

    return 0;
}