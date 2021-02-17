/*Program : DispMatrix5x5.c
* Deskripsi : Menampilkan papan permainan 5x5.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 / 1
*/


void disp_matrix_5X5()
{
	int i;

	for(i=0;i<5;i++){
		printf("             |     |     |     |\n");
		printf("          %c  |  %c  |  %c  |  %c  |  %c  \n",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3],matrix[i][4]);
		if(i!=4)
			printf("        ----- ----- ----- ----- ----- \n");
	}
	printf("\n\n");
}
