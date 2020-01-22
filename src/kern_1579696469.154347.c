#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(540, 650, 500, "random");
	int **B = create_two_dim_int(150, 900, "random");
	int *D = create_one_dim_int(930, "random");
	int ***E = create_three_dim_int(690, 470, 30, "random");
	int **C = create_two_dim_int(150, 300, "random");

	for (int c = 0; c < 29; c++)
	  for (int b = 0; b < 467; b++)
	    for (int a = 0; a < 539; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+3][c+2]*7-B[a][b]/C[a][b]+D[a];
	      
	      E[a][b][c]=E[a+5][b+3][c+1]/8;
	      
	      int var_a=D[a]+30;
	      int var_b=D[a+3]+40;
	    }

    return 0;
}