#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "random");
	int *D = create_one_dim_int(670, "random");
	int **C = create_two_dim_int(100, 530, "random");
	int ***A = create_three_dim_int(240, 390, 30, "random");

	for (int c = 0; c < 28; c++)
	  for (int b = 0; b < 385; b++)
	    for (int a = 2; a < 80; a++)
	    {
	      
	      B[a]=B[a-2]/C[a][b]-A[a][b][c];
	      
	      A[a][b][c]=A[a+1][b+5][c+2]+28;
	      
	      C[a][b]=B[a]+D[a]*A[a][b][c];
	      C[a-1][b]=B[a];
	      
	      B[a]=D[a]-C[a][b]+A[a][b][c];
	      
	      int var_a=B[a]+17;
	      int var_b=B[a-1]/39;
	      
	      int var_c=C[a][b]*33;
	      int var_d=C[a-1][b]-39;
	    }

    return 0;
}