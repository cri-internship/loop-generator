#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(570, 420, 570, "random");
	int **C = create_two_dim_int(780, 400, "random");
	int ***B = create_three_dim_int(710, 160, 430, "random");
	int **D = create_two_dim_int(180, 780, "random");

	for (int c = 3; c < 426; c++)
	  for (int b = 5; b < 159; b++)
	    for (int a = 5; a < 566; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-3][c-3]-B[a][b][c];
	      
	      C[a][b]=C[a-1][b-5]/29;
	      
	      A[a][b][c]=A[a+4][b+1][c+5]/C[a][b]+33-C[a][b];
	      
	      B[a][b][c]=B[a+2][b+1][c+4]*8;
	      
	      C[a][b]=15;
	      
	      int var_a=C[a][b]-48;
	      int var_b=C[a-5][b-3]-19;
	    }

    return 0;
}