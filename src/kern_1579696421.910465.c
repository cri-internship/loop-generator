#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(320, "random");
	int **B = create_two_dim_int(390, 830, "random");
	int *A = create_one_dim_int(490, "random");
	int *C = create_one_dim_int(110, "random");
	int ***E = create_three_dim_int(620, 50, 380, "random");

	for (int c = 0; c < 378; c++)
	  for (int b = 0; b < 47; b++)
	    for (int a = 0; a < 106; a++)
	    {
	      
	      A[a]=A[a+3]/D[a]-E[a][b][c]*C[a];
	      
	      D[a]=D[a+4]/B[a][b]-A[a]+C[a]*A[a];
	      
	      int var_a=C[a]+9;
	      int var_b=C[a+4]*42;
	      
	      int var_c=E[a][b][c]+6;
	      int var_d=E[a][b+3][c+2]-42;
	      
	      C[a]=B[a][b]/A[a];
	      A[a]=B[a+5][b+4]/D[a]*A[a]+E[a][b][c];
	    }

    return 0;
}