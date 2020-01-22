#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(740, 450, 270, "ones");
	int ***B = create_three_dim_int(510, 520, 390, "ones");

	for (int c = 4; c < 270; c++)
	  for (int b = 2; b < 447; b++)
	    for (int a = 5; a < 505; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-1][c-3]+A[a][b][c];
	      
	      B[a][b][c]=B[a-4][b][c-2]/A[a][b][c];
	      
	      A[a][b][c]=A[a+5][b+3][c]*38;
	      
	      B[a][b][c]=B[a+5][b+1][c+5]*42;
	      
	      int var_a=A[a][b][c]/47;
	      int var_b=A[a-3][b-2][c-2]-49;
	      
	      int var_c=B[a][b][c]/26;
	      int var_d=B[a-2][b][c-4]+14;
	    }

    return 0;
}