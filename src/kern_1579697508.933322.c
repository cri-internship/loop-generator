#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(360, 1000, 570, "ones");
	int ***B = create_three_dim_int(280, 100, 890, "ones");
	int *A = create_one_dim_int(320, "ones");
	int **D = create_two_dim_int(610, 970, "ones");

	for (int c = 5; c < 570; c++)
	  for (int b = 5; b < 97; b++)
	    for (int a = 4; a < 277; a++)
	    {
	      
	      A[a]=42;
	      float  var_a=A[a]+26;
	      
	      B[a][b][c]=B[a+3][b+3][c+1]/D[a][b]-C[a][b][c];
	      
	      A[a]=32;
	      
	      int var_b=C[a][b][c]*27;
	      int var_c=C[a-4][b-1][c-1]+0;
	      
	      int var_d=C[a][b][c]*22;
	      int var_e=C[a-4][b][c-5]/22;
	      
	      D[a][b]=C[a][b][c]/B[a][b][c];
	      A[a]=C[a-2][b-5][c-2]+A[a];
	    }

    return 0;
}