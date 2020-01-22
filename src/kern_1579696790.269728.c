#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(70, 880, 620, "zeros");
	int **C = create_two_dim_int(50, 210, "zeros");
	int **A = create_two_dim_int(960, 950, "zeros");

	for (int c = 2; c < 620; c++)
	  for (int b = 5; b < 210; b++)
	    for (int a = 4; a < 50; a++)
	    {
	      
	      A[a][b]=A[a-1][b-1]+B[a][b][c];
	      
	      A[a][b]=C[a][b]*A[a][b]-A[a][b];
	      B[a][b][c]=C[a-4][b-5]*44+A[a][b];
	      
	      int var_a=B[a][b][c]/7;
	      int var_b=B[a-4][b-4][c-2]/11;
	      
	      int var_c=C[a][b]+37;
	      int var_d=C[a-1][b-2]+16;
	    }

    return 0;
}