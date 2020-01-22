#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(390, 910, "random");
	int ***B = create_three_dim_int(780, 390, 530, "random");

	for (int c = 4; c < 528; c++)
	  for (int b = 5; b < 387; b++)
	    for (int a = 5; a < 388; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-5][c-4]/38;
	      
	      B[a][b][c]=B[a+3][b+3][c+2]*40;
	      
	      A[a][b]=7;
	      A[a+2][b+2]=23;
	      
	      int var_a=A[a][b]*14;
	      int var_b=A[a][b-2]+36;
	      
	      int var_c=A[a][b]-31;
	      int var_d=A[a+1][b+2]-47;
	      
	      A[a][b]=B[a][b][c]*A[a][b];
	      B[a][b][c]=B[a-2][b-5][c]*4;
	    }

    return 0;
}