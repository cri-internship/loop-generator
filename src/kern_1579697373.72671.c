#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(1000, 910, 230, "zeros");
	float ***D = create_three_dim_float(570, 830, 770, "zeros");
	float ***B = create_three_dim_float(720, 820, 230, "zeros");
	float ***C = create_three_dim_float(590, 60, 960, "zeros");

	for (int c = 2; c < 960; c++)
	  for (int b = 5; b < 60; b++)
	    for (int a = 0; a < 590; a++)
	    {
	      
	      B[a][b][c]=C[a][b][c]+D[a][b][c]/0.759;
	      C[a][b][c]=C[a][b-5][c-2]*B[a][b][c]/A[a][b][c]+D[a][b][c];
	    }

    return 0;
}