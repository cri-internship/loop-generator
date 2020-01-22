#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(190, 580, "ones");
	int **C = create_two_dim_int(90, 290, "ones");
	int ***B = create_three_dim_int(760, 710, 870, "ones");
	int ***D = create_three_dim_int(910, 470, 320, "ones");

	for (int c = 5; c < 315; c++)
	  for (int b = 4; b < 467; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      D[a][b][c]=D[a+4][b+3][c+5]/22;
	      
	      D[a][b][c]=11;
	      
	      A[a][b]=42;
	      A[a-5][b-1]=28;
	      
	      int var_a=D[a][b][c]*45;
	      int var_b=D[a-1][b-4][c-1]-20;
	    }

    return 0;
}