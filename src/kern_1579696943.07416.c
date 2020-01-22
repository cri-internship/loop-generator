#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(450, 510, "random");
	int ***C = create_three_dim_int(650, 780, 730, "random");
	int **A = create_two_dim_int(570, 390, "random");
	int *B = create_one_dim_int(250, "random");

	for (int c = 2; c < 386; c++)
	  for (int b = 4; b < 248; b++)
	    for (int a = 4; a < 248; a++)
	    {
	      
	      B[a]=B[a-4]*30;
	      
	      D[a][b]=D[a-2][b-2]/A[a][b]*23-B[a];
	      
	      D[a][b]=C[a][b][c]*A[a][b]+B[a];
	      
	      B[a]=8;
	      
	      C[a][b][c]=D[a][b]-A[a][b];
	      B[a]=D[a][b-2]/A[a][b];
	      
	      int var_a=B[a]-21;
	      int var_b=B[a+2]/21;
	      
	      int var_c=A[a][b]-15;
	      int var_d=A[a+4][b+4]+37;
	    }

    return 0;
}