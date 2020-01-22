#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(620, 690, "zeros");
	int ***A = create_three_dim_int(900, 840, 300, "zeros");
	int **C = create_two_dim_int(520, 560, "zeros");

	for (int c = 2; c < 300; c++)
	  for (int b = 5; b < 686; b++)
	    for (int a = 4; a < 615; a++)
	    {
	      
	      B[a][b]=B[a+1][b+3]+11;
	      
	      B[a][b]=12;
	      
	      int var_a=B[a][b]-49;
	      int var_b=B[a][b]-14;
	      
	      int var_c=A[a][b][c]*34;
	      int var_d=A[a-4][b-5][c-2]*8;
	    }

    return 0;
}