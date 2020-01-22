#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(130, 660, "ones");
	int ***A = create_three_dim_int(710, 670, 830, "ones");
	int **B = create_two_dim_int(70, 940, "ones");
	int **C = create_two_dim_int(490, 710, "ones");
	int ***E = create_three_dim_int(760, 90, 470, "ones");

	for (int c = 5; c < 470; c++)
	  for (int b = 3; b < 90; b++)
	    for (int a = 1; a < 126; a++)
	    {
	      
	      D[a][b]=26;
	      D[a+4][b+1]=6;
	      
	      E[a][b][c]=B[a][b]-A[a][b][c]+C[a][b]*D[a][b];
	      E[a-1][b-3][c-5]=A[a][b][c];
	      
	      A[a][b][c]=18;
	      A[a+4][b+1][c+5]=36;
	      
	      int var_a=C[a][b]-20;
	      int var_b=C[a-1][b-1]/25;
	    }

    return 0;
}