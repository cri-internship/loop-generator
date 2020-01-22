#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(700, "zeros");
	int *C = create_one_dim_int(550, "zeros");
	int **D = create_two_dim_int(240, 690, "zeros");
	int ***A = create_three_dim_int(20, 530, 770, "zeros");
	int ***B = create_three_dim_int(70, 590, 300, "zeros");

	for (int b = 0; b < 688; b++)
	  for (int a = 5; a < 236; a++)
	  {
	    
	     E[a]=E[a+5]/1;
	    
	     C[a]=D[a][b]*A[a][b][a];
	     C[a-5]=E[a]*33;
	    
	     D[a][b]=6;
	     D[a+4][b+2]=46;
	    
	     int var_a=E[a]-7;
	  }

    return 0;
}