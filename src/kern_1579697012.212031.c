#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(830, 940, 470, "zeros");
	int *D = create_one_dim_int(790, "zeros");
	int ***A = create_three_dim_int(910, 470, 610, "zeros");
	int *C = create_one_dim_int(780, "zeros");

	for (int c = 5; c < 468; c++)
	  for (int b = 3; b < 466; b++)
	    for (int a = 3; a < 790; a++)
	    {
	      
	      D[a]=D[a-3]+B[a][b][c];
	      
	      float  var_a=D[a]*23;
	      
	      A[a][b][c]=A[a+5][b+4][c]+3;
	      
	      C[a]=D[a]*C[a]-A[a][b][c]/38;
	      D[a]=B[a][b][c]/A[a][b][c]+C[a];
	      
	      B[a][b][c]=B[a][b+4][c+1]+14;
	      
	      B[a][b][c]=D[a];
	      
	      int var_b=B[a][b][c]*37;
	      int var_c=B[a-2][b-3][c-5]*4;
	    }

    return 0;
}