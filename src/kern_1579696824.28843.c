#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(640, "zeros");
	int **D = create_two_dim_int(710, 80, "zeros");
	int ***A = create_three_dim_int(430, 490, 330, "zeros");
	int ***C = create_three_dim_int(490, 490, 830, "zeros");

	for (int c = 5; c < 830; c++)
	  for (int b = 1; b < 79; b++)
	    for (int a = 2; a < 490; a++)
	    {
	      
	      D[a][b]=D[a-2][b-1]-40;
	      
	      B[a]=B[a+4]+5;
	      
	      int var_a=D[a][b]*38;
	      int var_b=D[a+2][b+1]+37;
	      
	      C[a][b][c]=C[a][b][c]+B[a];
	      A[a][b][c]=C[a][b-1][c-5]-A[a][b][c]*D[a][b]/D[a][b];
	    }

    return 0;
}