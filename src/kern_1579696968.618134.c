#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 170, "ones");
	int ***E = create_three_dim_int(70, 570, 890, "ones");
	int **B = create_two_dim_int(970, 510, "ones");
	int **D = create_two_dim_int(930, 660, "ones");
	int *A = create_one_dim_int(390, "ones");

	for (int c = 0; c < 890; c++)
	  for (int b = 5; b < 506; b++)
	    for (int a = 4; a < 67; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]*35;
	      
	      B[a][b]=B[a][b+4]/30;
	      
	      E[a][b][c]=E[a+3][b+4][c]-C[a][b]*A[a]/B[a][b]+D[a][b];
	    }

    return 0;
}