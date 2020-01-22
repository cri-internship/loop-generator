#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(990, 860, "zeros");
	int ***B = create_three_dim_int(200, 810, 460, "zeros");
	int ***A = create_three_dim_int(170, 760, 160, "zeros");

	for (int c = 5; c < 158; c++)
	  for (int b = 1; b < 755; b++)
	    for (int a = 3; a < 166; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-1][c-3]+41;
	      
	      A[a][b][c]=15;
	      
	      int var_a=A[a][b][c]-40;
	      int var_b=A[a+2][b+1][c]-45;
	      
	      int var_c=B[a][b][c]*17;
	      int var_d=B[a-3][b-1][c-5]-10;
	    }

    return 0;
}