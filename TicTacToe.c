
#include <stdio.h>
#include <stdlib.h>

char matrix[7][7];
																		
void init_matrix(int);																
void player_move();																	
void computer_move_3X3();
void computer_move_5X5();
void computer_move_7X7();																														
void disp_matrix_3X3();
void disp_matrix_5X5();	
void disp_matrix_7X7();																													
char check_3X3();
char check_5X5();		
char check_7X7();																		
char about();
void highscore();															

int main()
{
	system("cls");
	int input, input1, first_move;
	char done=' ';

	printf("\n \n");

	printf("\t Tic Tac Toe sederhana\n\n");

	printf("\t 1. Bermain.\n\t 2. Highscore.\n\t 3. About.\n\t 4. Exit.\n\n\t Pilihan : ");
	
	scanf("%d", &input);

	if(input==1){
		system("CLS");

		printf("\n\t Pilihan ukuram matriks\n\t 3 untuk matriks 3x3.\n\t 5 untuk matirks 5x5.\n\t 7 untuk matriks 7x7\n\n\t pilihan anda : ");

		scanf("%d",&input);

		printf("\n \n");

		printf("\t Jika ingin mendapatkan giliran pertama pilih 1, jika tidak 2 : ");

		scanf("%d", &first_move);

		printf("\n \n");

		init_matrix(input);																	
	
		if(input==3){

			if (first_move == 2) {

				computer_move_3X3();
				disp_matrix_3X3 ();
			}

			do{
				player_move();																
				disp_matrix_3X3();															
				done=check_3X3();															
				if(done!=' ')
					break;																	
		
				printf("\t Giliran Komputer\n\n\n");
				computer_move_3X3();
				disp_matrix_3X3();															
				done=check_3X3();															

			}while(done==' ');
		}
		else if(input==5){

			if (first_move == 2) {

				computer_move_5X5();
				disp_matrix_5X5 ();
			}

			do{
				player_move();															
				disp_matrix_5X5();															
				done=check_5X5();

				if(done!=' ')
					break;																	
		
				printf("\t Giliran Komputer\n\n\n");
				computer_move_5X5();
				disp_matrix_5X5();															
				done=check_5X5();															

			}while(done==' ');
		}
        else if(input==7){

			if (first_move == 2) {

				computer_move_7X7();
				disp_matrix_7X7 ();
			}

			do{
				player_move();																
				disp_matrix_7X7();															
				done=check_7X7();

				if(done!=' ')
					break;																	
		
				printf("\t Giliran Komputer\n\n\n");
				computer_move_7X7();
				disp_matrix_7X7();															
				done=check_7X7();															

			}while(done==' ');
		}

		if(done=='X')																	
			printf("Menang\n");														
		else if(done=='O')																
			printf("Komputer Menang\n");													
		else if(done=='D')																
			printf("Draw\n");

		printf("\n\n\t Ketik 9 untuk kembali ke menu : ");
		scanf("%d", &input1);
		if(input1==9){
		main();
		}
	
		return 0;

	}else if(input==2){
		system("cls");
		printf("\n\t WORK IN PROGRESS");
		printf("\n\n\t Ketik 9 untuk kembali ke menu : ");
		scanf("%d", &input1);
		if(input1==9){
		main();
		}
	}else if(input==3){
		about();
		printf("\n\n\t Ketik 9 untuk kembali ke menu : ");
		scanf("%d", &input1);
		if(input1==9){
		main();
		}
	}
}

/*Program : About.c
* Deskripsi : Menampilkan penjelasan permainan dan author.
* Nama : Fadhil Muhammad
* tanggal/ versi : 26 - januari - 2021 / 1 
*/

char about()
{
	system("cls");
	printf("\n\t Game Tic Tac Toe adalah game dimana\n\t player harus menderetkan nilai O/X\n\t sebanyak 3 deret untuk ukuran papan\n\t 3x3, 4 deret untuk papan  5x5, dan 5 deret untuk papan 7x7,\n\t mau itu horizontal, vertikal, maupun diagonal\n\n\t Game ini dibuat oleh Fadhil Muhammad");
}

/*Program : initmarix.c
* Deskripsi : Memberikan char kosong pada papan permainan
* Nama : Rajibds
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

void init_matrix(int n)																	
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			matrix[i][j]=' ';														

}

/*Program : PlayerMove.c
* Deskripsi : Pergerakan player atau pemain.
* Nama : Rajibds
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

void player_move()
{
	int x,y;

	printf("\t Masukan kordinat x dan y: ");
	scanf("%d %d",&x,&y);															

	if(matrix[--x][--y]!=' '){														
		printf("Gerakan tidak valid, coba ulang lagi\n\n");
		player_move();
	}
	else
		matrix[x][y]='X';															
	printf("\n\n\n");
}

/*Program : ComputerMove3x3.c
* Deskripsi : Pergerakan Komputer pada papan 3x3.
* Nama : Rajibds
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

void computer_move_3X3()
{
	int i,j;

    // Pengecekan baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<3;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][0]=='X'&& matrix[i][1]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][0]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[0][i]=='X'&& matrix[1][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[0][i]=='X'&& matrix[2][i]=='X')){								
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 adalah 'O'
	for(i=0;i<3;i++){
		if((matrix[2][i]=='O'&& matrix[1][i]=='O')||(matrix[2][i]=='X'&& matrix[1][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
		}
	}

	// Pengecekan Diagonal

	if((matrix[0][0]=='O'&&matrix[1][1]=='O')||(matrix[0][0]=='X'&&matrix[1][1]=='X')){										
		if(matrix[2][2]==' '){
				matrix[2][2]='O';
				return;
			}
	}

	if((matrix[0][0]=='O'&&matrix[2][2]=='O')||(matrix[0][0]=='X'&&matrix[2][2]=='X')){
		if(matrix[1][1]==' '){
				matrix[1][1]='O';
				return;
			}
	}

	if((matrix[1][1]=='O'&&matrix[2][2]=='O')||(matrix[1][1]=='X'&&matrix[2][2]=='X')){										
		if(matrix[0][0]==' '){
				matrix[0][0]='O';
				return;
			}
	}

	if((matrix[0][2]=='O'&&matrix[1][1]=='O')||(matrix[0][2]=='X'&&matrix[1][1]=='X')){					
		if(matrix[2][0]==' '){
				matrix[2][0]='O';
				return;
			}
	}

	if((matrix[0][2]=='O'&&matrix[2][0]=='O')||(matrix[0][2]=='X'&&matrix[2][0]=='X')){										
		if(matrix[1][1]==' '){
				matrix[1][1]='O';
				return;
			}
	}

	if((matrix[1][1]=='O'&&matrix[2][0]=='O')||(matrix[1][1]=='X'&&matrix[2][0]=='X')){										
		if(matrix[0][2]==' '){
				matrix[0][2]='O';
				return;
			}
	}

	// Menghalangi
	if(matrix[1][1]==' '){
		matrix[1][1]='O';															
		return;
	}

	if (matrix [1][1] == 'O') {

		if (matrix [0][0] == 'X') {

			if (matrix [2][2] == ' ') {
				matrix [2][2] = 'O';
				return;
			}
		}

		if (matrix [0][2] == 'X') {

			if (matrix [2][0] == ' ') {
				matrix [2][0] = 'O';
				return;
			}
		}

		if (matrix [2][0] == 'X') {

			if (matrix [0][2] == ' ') {
				matrix [0][2] = 'O';
				return;
			}	
		}

		if (matrix [2][2] == 'X') {

			if (matrix [0][0] == ' '){
				matrix [0][0] = 'O';
				return;
			}	
		}
	}

	if(matrix[1][1]=='X'){
		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
	}

	if((matrix[0][0]=='X'&&matrix[2][2]=='X') || (matrix[0][2]=='X'&&matrix[2][0]=='X')){
		if(matrix[0][1]==' '){
			matrix[0][1]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&&matrix[2][2]=='X'){
		if(matrix[0][2]==' '){
			matrix[0][2]='O';
			return;
		}
	}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)

			if (matrix [i][j] == ' ') {

				matrix [i][j] = 'O';
				return;
			}
		
}

/*Program : DispMatrix3x3.c
* Deskripsi : Menampilkan papan permainan 3x3.
* Nama : Rajibds
* tanggal/ versi : 19 - januari - 2021 / 1
*/

void disp_matrix_3X3()
{ 
	int i;

	for(i=0;i<3;i++){
		printf("             |     |      \n");
		printf("          %c  |  %c  |  %c  \n",matrix[i][0],matrix[i][1],matrix[i][2]);
		if(i!=2)
			printf("        ----- ----- -----\n");
	}
	printf("\n\n");
}

/*Program : Check3x3.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 3x3.
* Nama : Rajibds
* tanggal/ versi : 19 - januari - 2021 / 1 
*/

char check_3X3()
{
	int i,j;

	// Pengecekan Baris

	for(i=0;i<3;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])							
			return matrix[i][0];

	// Pengecekan Kolom

	for(i=0;i<3;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i])							
			return matrix[0][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])								
		return matrix[0][0];

	if(matrix[0][2]==matrix[1][1]&&matrix[0][2]==matrix[2][0])								
			return matrix[0][2];

	// Pengecekan bila masih ada yang kosong

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak ada maka seri

	return 'D';
}

/*Program : ComputerMove5x5.c
* Deskripsi : Pergerakan Komputer pada papan 5x5.
* Nama : Fadhil Muhammad
* tanggal/ versi : 19 - januari - 2021 sampai 06 - februari - 2021 / 2
*/

void computer_move_5X5()
{
	int i,j;
	// Pengecekan Baris.

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][2]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][0]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][0]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][1]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][1]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Pengecekan Baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][0]=='X'&& matrix[i][1]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][2]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][1]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][0]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][1]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[i][2]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[2][i]=='X')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[2][i]=='O')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[0][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[0][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[1][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[1][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<5;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	for(i=0;i<5;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[0][i]=='X'&& matrix[1][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[2][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<5;i++){

		if(matrix[1][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[0][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[1][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<5;i++){
		if(matrix[2][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Pengecakan Diagonal

	if(matrix[0][0]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][0]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
	}

	if(matrix[3][3]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][4]=='X'){

		if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
		else if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][3]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
		else if(matrix[4][4]==' '){
			matrix[4][4]='O';
			return;
		}

	}

	if(matrix[0][4]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
	}

	if(matrix[3][1]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][0]=='X'){

		if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][1]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
		else if(matrix[4][0]==' '){
			matrix[4][0]=='O';
			return;
		}
	}

	if(matrix[1][3]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][4]==' '){
			matrix[0][4]='O';
			return;
		}
		else if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}

	}

	// Jika satu papan diisi 'X' maka komputer akan mengisi 'O' pada bagian kiri, kanan, atas, atau bawah.
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrix[i][j]=='X'){

				if(matrix[i][--j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[i][++j]==' '){
					matrix[i][j]='O';
					return;
				}
				else if(matrix[++i][j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[--i][j]==' '){
					matrix[i][j]='O';
					return;
				}

			}
		}
	}

}

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

/*Program : Check5x5.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 5x5.
* Nama : Fadhil Muhammad
* tanggal/ versi : 23 - januari - 2021 / 1 
*/

char check_5X5()
{
	int i,j;

	// Pengecekan Baris

	for(i=0;i<5;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2]&&matrix[i][0]==matrix[i][3])							//checking if the elements of rows are identical
			return matrix[i][0];

	for(i=0;i<5;i++)
		if(matrix[i][1]==matrix[i][2]&&matrix[i][1]==matrix[i][3]&&matrix[i][1]==matrix[i][4])							//checking if the elements of rows are identical
			return matrix[i][1];

	for(i=0;i<5;i++)
		if(matrix[i][2]==matrix[i][3]&&matrix[i][2]==matrix[i][4]&&matrix[i][2]==matrix[i][5])							//checking if the elements of rows are identical
			return matrix[i][2];

	// Pengecekan Kolom

	for(i=0;i<5;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i]&&matrix[0][i]==matrix[3][i])							//checking if the elements of columns are identical
			return matrix[0][i];
	
	for(i=0;i<5;i++)
		if(matrix[1][i]==matrix[2][i]&&matrix[1][i]==matrix[3][i]&&matrix[1][i]==matrix[4][i])							//checking if the elements of columns are identical
			return matrix[1][i];
	
	for(i=0;i<5;i++)
		if(matrix[2][i]==matrix[3][i]&&matrix[2][i]==matrix[4][i]&&matrix[2][i]==matrix[5][i])							//checking if the elements of columns are identical
			return matrix[2][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2]&&matrix[0][0]==matrix[3][3])								//checking if (1,1),(2,2) & (3,3) are identical
		return matrix[0][0];
	
	if(matrix[0][1]==matrix[1][2]&&matrix[0][1]==matrix[2][3]&&matrix[0][1]==matrix[3][4])								//checking if (1,3),(2,2) & (3,1) are identical
			return matrix[0][1];

	if(matrix[0][3]==matrix[1][2]&&matrix[0][3]==matrix[2][1]&&matrix[0][3]==matrix[3][0])								
			return matrix[0][3];

	if(matrix[0][4]==matrix[1][3]&&matrix[0][4]==matrix[2][2]&&matrix[0][4]==matrix[3][1])								
			return matrix[0][4];

	if(matrix[1][0]==matrix[2][1]&&matrix[1][0]==matrix[3][2]&&matrix[1][0]==matrix[4][3])								
			return matrix[1][0];
	
	if(matrix[1][1]==matrix[2][2]&&matrix[1][1]==matrix[3][3]&&matrix[1][1]==matrix[4][4])								
			return matrix[1][1];

	if(matrix[1][3]==matrix[2][2]&&matrix[1][3]==matrix[3][1]&&matrix[1][3]==matrix[4][0])								
			return matrix[1][3];

	if(matrix[1][4]==matrix[2][3]&&matrix[1][4]==matrix[3][2]&&matrix[1][4]==matrix[4][1])								
			return matrix[1][4];

	// Pengecekan bila ada index yang kosong

	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak ada maka seri

	return 'D';
}

/*Program : ComputerMove7x7.c
* Deskripsi : Pergerakan Komputer pada papan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - Februari - 2021 / 1
*/

void computer_move_7X7()
{
	int i,j;
	// Pengecekan Baris

	// Jika papan 1, 2, dan, 4 adalah 'X' atau 'O' maka papan 3 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 2, dan, 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][1]=='X')||(matrix[i][1]=='X'&& matrix[i][2]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][1]=='O')||(matrix[i][1]=='O'&& matrix[i][2]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan, 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][0]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}
	

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][3]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][3]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][2]=='X')||(matrix[i][2]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][2]=='O')||(matrix[i][2]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][1]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 2, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][1]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}
	
	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][4]=='X')||(matrix[i][4]=='X'&& matrix[i][5]=='X')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	// Jika papan 3, 5, dan, 6 adalah 'X' atau 'O' maka papan 4 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][4]=='O')||(matrix[i][4]=='O'&& matrix[i][5]=='O')){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][3]=='X'&& matrix[i][4]=='X')||(matrix[i][4]=='X'&& matrix[i][6]=='X')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 4, 5, dan, 7 adalah 'X' atau 'O' maka papan 3 atau 6 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][3]=='O'&& matrix[i][4]=='O')||(matrix[i][4]=='O'&& matrix[i][6]=='O')){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
			else if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 3, 4, dan, 5 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[i][2]=='X'&& matrix[i][3]=='X')||(matrix[i][3]=='X'&& matrix[i][4]=='X')){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[i][2]=='O'&& matrix[i][3]=='O')||(matrix[i][3]=='O'&& matrix[i][4]=='O')){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
			else if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}
	// Pengecekan baris

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][0]=='X'&& matrix[i][1]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][2]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
			else if(matrix[i][4]==' '){
				matrix[i][4]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][1]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][0]==' '){
				matrix[i][0]='O';
				return;
			}
			else if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][0]=='X'&& matrix[i][2]=='X'){									
			if(matrix[i][1]==' '){
				matrix[i][1]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][1]=='X'&& matrix[i][3]=='X'){									
			if(matrix[i][2]==' '){
				matrix[i][2]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][2]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][3]==' '){
				matrix[i][3]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][3]=='X'&& matrix[i][4]=='X'){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 6 adalah 'X' maka papan 7 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][4]=='X'&& matrix[i][5]=='X'){									
			if(matrix[i][6]==' '){
				matrix[i][6]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 7 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[i][4]=='X'&& matrix[i][6]=='X'){									
			if(matrix[i][5]==' '){
				matrix[i][5]='O';
				return;
			}
		}
	}

	// Pengecekan kolom

	// // Jika papan 1, 2, dan 3 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 2, dan 5 adalah 'X' atau 'O' maka papan 3 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// // Jika papan 1, 2, dan 3 adalah 'X' atau 'O' maka papan 4 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[1][i]=='X')||(matrix[1][i]=='X'&& matrix[2][i]=='X')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[1][i]=='O')||(matrix[1][i]=='O'&& matrix[2][i]=='O')){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan 4 adalah 'X' atau 'O' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 3, dan 5 adalah 'X' atau 'O' maka papan 2 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 1, 4, dan 5 adalah 'X' atau 'O' maka papan 2 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[0][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[0][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 2, 3, dan 4 adalah 'X' atau 'O' maka papan 1 atau 5 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[3][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[3][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// // Jika papan 2, 3, dan 5 adalah 'X' atau 'O' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[2][i]=='X')||(matrix[2][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[2][i]=='O')||(matrix[2][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// // Jika papan 2, 4, dan 5 adalah 'X' atau 'O' maka papan 1 atau 3 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[1][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[1][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// // Jika papan 3, 4, dan 5 adalah 'X' atau 'O' maka papan 1 atau 2 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}

	// // Jika papan 3, 4, dan 5 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[2][i]=='X'&& matrix[3][i]=='X')||(matrix[3][i]=='X'&& matrix[4][i]=='X')){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[2][i]=='O'&& matrix[3][i]=='O')||(matrix[3][i]=='O'&& matrix[4][i]=='O')){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// // Jika papan 4, 5, dan 7 adalah 'X' atau 'O' maka papan 3 atau 6 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[3][i]=='X'&& matrix[4][i]=='X')||(matrix[4][i]=='X'&& matrix[6][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[3][i]=='O'&& matrix[4][i]=='O')||(matrix[4][i]=='O'&& matrix[6][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// // Jika papan 4, 5, dan 6 adalah 'X' atau 'O' maka papan 6 atau 7 adalah 'O'
	for(i=0;i<7;i++){

		if((matrix[3][i]=='X'&& matrix[4][i]=='X')||(matrix[4][i]=='X'&& matrix[5][i]=='X')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	for(i=0;i<7;i++){

		if((matrix[3][i]=='O'&& matrix[4][i]=='O')||(matrix[4][i]=='O'&& matrix[5][i]=='O')){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
			else if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// Pengecekan Kolom

	// Jika papan 1 dan 2 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[0][i]=='X'&& matrix[1][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 3 dan 4 adalah 'X' maka papan 2 atau 5 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[2][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
			else if(matrix[4][i]==' '){
				matrix[4][i]='O';
				return;
			}
		}
	}

	// Jika papan 2 dan 3 adalah 'X' maka papan 1 atau 4 adalah 'O'
	for(i=0;i<7;i++){

		if(matrix[1][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[0][i]==' '){
				matrix[0][i]='O';
				return;
			}
			else if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 4 dan 5 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}

	// Jika papan 1 dan 3 adalah 'X' maka papan 2 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[0][i]=='X'&& matrix[2][i]=='X'){									
			if(matrix[1][i]==' '){
				matrix[1][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 2 dan 4 adalah 'X' maka papan 3 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[1][i]=='X'&& matrix[3][i]=='X'){									
			if(matrix[2][i]==' '){
				matrix[2][i]='O';
				return;
			}
		}
	}
	
	// Jika papan 3 dan 5 adalah 'X' maka papan 4 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[2][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[3][i]==' '){
				matrix[3][i]='O';
				return;
			}
		}
	}

	// Jika papan 4 dan 5 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[3][i]=='X'&& matrix[4][i]=='X'){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 6 adalah 'X' maka papan 7 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[4][i]=='X'&& matrix[5][i]=='X'){									
			if(matrix[6][i]==' '){
				matrix[6][i]='O';
				return;
			}
		}
	}

	// Jika papan 5 dan 7 adalah 'X' maka papan 6 adalah 'O'
	for(i=0;i<7;i++){
		if(matrix[4][i]=='X'&& matrix[6][i]=='X'){									
			if(matrix[5][i]==' '){
				matrix[5][i]='O';
				return;
			}
		}
	}

	// Pengecekan Diagonal

	if(matrix[0][0]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][0]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
	}

	if(matrix[3][3]=='X'&& matrix[1][1]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][4]=='X'){

		if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[1][1]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][0]==' '){
			matrix[0][0]='O';
			return;
		}
		else if(matrix[3][3]==' '){
			matrix[3][3]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][3]=='X'){

		if(matrix[1][1]==' '){
			matrix[1][1]='O';
			return;
		}
		else if(matrix[4][4]==' '){
			matrix[4][4]='O';
			return;
		}

	}

	if(matrix[0][4]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[2][2]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
	}

	if(matrix[3][1]=='X'&& matrix[1][3]=='X'){

		if(matrix[2][2]==' '){
			matrix[2][2]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[4][0]=='X'){

		if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}
	}

	if(matrix[2][2]=='X'&& matrix[3][1]=='X'){

		if(matrix[1][3]==' '){
			matrix[1][3]='O';
			return;
		}
		else if(matrix[4][0]==' '){
			matrix[4][0]=='O';
			return;
		}
	}

	if(matrix[1][3]=='X'&& matrix[2][2]=='X'){

		if(matrix[0][4]==' '){
			matrix[0][4]='O';
			return;
		}
		else if(matrix[3][1]==' '){
			matrix[3][1]='O';
			return;
		}

	}
	
	if(matrix[1][5]=='X'&& matrix[2][4]=='X'){
		if(matrix[0][6]==' '){
			matrix[0][6]='O';
			return;
		}
	}

	if(matrix[2][5]=='X'&& matrix[3][4]=='X'){
		if(matrix[1][6]==' '){
			matrix[1][6]='O';
			return;
		}
	}

	if(matrix[3][5]=='X'&& matrix[4][4]=='X'){
		if(matrix[2][6]==' '){
			matrix[2][6]='O';
			return;
		}
	}

	if(matrix[3][6]=='X'&& matrix[4][5]=='X'){
		if(matrix[5][4]==' '){
			matrix[5][4]='O';
			return;
		}
	}
	
	if(matrix[4][6]=='X'&& matrix[5][5]=='X'){
		if(matrix[5][5]==' '){
			matrix[5][5]='O';
			return;
		}
	}

	if(matrix[0][4]=='X'&& matrix[1][5]=='X'){
		if(matrix[2][6]==' '){
			matrix[2][6]='O';
			return;
		}
	}

	if(matrix[1][4]=='X'&& matrix[2][5]=='X'){
		if(matrix[3][6]==' '){
			matrix[3][6]='O';
			return;
		}
	}

	if(matrix[3][4]=='X'&& matrix[4][5]=='X'){
		if(matrix[5][6]==' '){
			matrix[5][6]='O';
			return;
		}
	}

	if(matrix[4][4]=='X'&& matrix[5][5]=='X'){
		if(matrix[6][6]==' '){
			matrix[6][6]='O';
			return;
		}
	}

	if(matrix[4][2]=='X'&& matrix[5][1]=='X'){
		if(matrix[6][0]==' '){
			matrix[6][0]='O';
			return;
		}
	}

	if(matrix[4][0]=='X'&& matrix[5][1]=='X'){
		if(matrix[6][2]==' '){
			matrix[6][2]='O';
			return;
		}
	}

	if(matrix[4][1]=='X'&& matrix[5][2]=='X'){
		if(matrix[6][3]==' '){
			matrix[6][3]='O';
			return;
		}
	}

	if(matrix[4][3]=='X'&& matrix[5][2]=='X'){
		if(matrix[6][1]==' '){
			matrix[6][1]='O';
			return;
		}
	}

	if(matrix[4][2]=='X'&& matrix[5][3]=='X'){
		if(matrix[6][4]==' '){
			matrix[6][4]='O';
			return;
		}
	}

	if(matrix[4][4]=='X'&& matrix[5][3]=='X'){
		if(matrix[6][2]==' '){
			matrix[6][2]='O';
			return;
		}
	}

	if(matrix[4][3]=='X'&& matrix[5][4]=='X'){
		if(matrix[6][5]==' '){
			matrix[6][5]='O';
			return;
		}
	}

	if(matrix[4][5]=='X'&& matrix[5][4]=='X'){
		if(matrix[6][3]==' '){
			matrix[6][3]='O';
			return;
		}
	}

	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(matrix[i][j]=='X'){

				if(matrix[i][--j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[i][++j]==' '){
					matrix[i][j]='O';
					return;
				}
				else if(matrix[++i][j]==' '){
					matrix[i][j]='O';
					return;
				}

				else if(matrix[--i][j]==' '){
					matrix[i][j]='O';
					return;
				}

			}
		}
	}

}

/*Program : DispMatrix7x7.c
* Deskripsi : Menampilkan papan permainan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - januari - 2021 / 1
*/

void disp_matrix_7X7()
{
	int i;

	for(i=0;i<7;i++){
		printf("             |     |     |     |     |     |\n");
		printf("          %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c  \n",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3],matrix[i][4],matrix[i][5],matrix[i][6]);
		if(i!=6)
			printf("        ----- ----- ----- ----- ----- ----- ----- \n");
	}
	printf("\n\n");
}

/*Program : Check7x7.c
* Deskripsi : Pemeriksaan apakah sudah memenuhi persyaratan untuk menang, kalah, atau seri pada papan permainan 7x7.
* Nama : Fadhil Muhammad
* tanggal/ versi : 06 - Februari - 2021 / 1 
*/

char check_7X7()
{
	int i,j;

	// Pengecekan baris

	for(i=0;i<7;i++)
		if(matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2]&&matrix[i][0]==matrix[i][3]&&matrix[i][0]==matrix[i][4])
			return matrix[i][0];

	for(i=0;i<7;i++)
		if(matrix[i][1]==matrix[i][2]&&matrix[i][1]==matrix[i][3]&&matrix[i][1]==matrix[i][4]&&matrix[i][1]==matrix[i][5])
			return matrix[i][1];

	for(i=0;i<7;i++)
		if(matrix[i][2]==matrix[i][3]&&matrix[i][2]==matrix[i][4]&&matrix[i][2]==matrix[i][5]&&matrix[i][2]==matrix[i][6])
			return matrix[i][2];

	// Pengecekan kolom

	for(i=0;i<7;i++)
		if(matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i]&&matrix[0][i]==matrix[3][i]&&matrix[0][i]==matrix[4][i])							//checking if the elements of columns are identical
			return matrix[0][i];
	
	for(i=0;i<7;i++)
		if(matrix[1][i]==matrix[2][i]&&matrix[1][i]==matrix[3][i]&&matrix[1][i]==matrix[4][i]&&matrix[1][i]==matrix[5][i])							//checking if the elements of columns are identical
			return matrix[1][i];

	for(i=0;i<7;i++)
		if(matrix[2][i]==matrix[3][i]&&matrix[2][i]==matrix[4][i]&&matrix[2][i]==matrix[5][i]&&matrix[2][i]==matrix[6][i])							//checking if the elements of columns are identical
			return matrix[2][i];

	// Pengecekan Diagonal

	if(matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2]&&matrix[0][0]==matrix[3][3]&&matrix[0][0]==matrix[4][4])						
		return matrix[0][0];

	if(matrix[0][1]==matrix[1][2]&&matrix[0][1]==matrix[2][3]&&matrix[0][1]==matrix[3][4]&&matrix[0][1]==matrix[4][5])						
		return matrix[0][1];

	if(matrix[0][2]==matrix[1][3]&&matrix[0][2]==matrix[2][4]&&matrix[0][2]==matrix[3][5]&&matrix[0][2]==matrix[4][6])						
		return matrix[0][2];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];
	
	if(matrix[0][5]==matrix[1][4]&&matrix[0][5]==matrix[2][3]&&matrix[0][5]==matrix[3][2]&&matrix[0][5]==matrix[4][1])						
		return matrix[0][5];

	if(matrix[0][4]==matrix[1][3]&&matrix[0][4]==matrix[2][2]&&matrix[0][4]==matrix[3][1]&&matrix[0][4]==matrix[4][0])						
		return matrix[0][4];

	if(matrix[0][6]==matrix[1][5]&&matrix[0][6]==matrix[2][4]&&matrix[0][6]==matrix[3][3]&&matrix[0][6]==matrix[4][2])						
		return matrix[0][6];

	if(matrix[1][0]==matrix[2][1]&&matrix[1][0]==matrix[3][2]&&matrix[1][0]==matrix[4][3]&&matrix[1][0]==matrix[5][4])						
		return matrix[1][0];

	if(matrix[1][1]==matrix[2][2]&&matrix[1][1]==matrix[3][3]&&matrix[1][1]==matrix[4][4]&&matrix[1][1]==matrix[5][5])						
		return matrix[1][1];

	if(matrix[1][2]==matrix[2][3]&&matrix[1][2]==matrix[3][4]&&matrix[1][2]==matrix[4][5]&&matrix[1][2]==matrix[5][6])						
		return matrix[1][2];

	if(matrix[1][6]==matrix[2][5]&&matrix[1][6]==matrix[3][4]&&matrix[1][6]==matrix[4][3]&&matrix[1][6]==matrix[5][2])						
		return matrix[1][6];

	if(matrix[1][5]==matrix[2][4]&&matrix[1][5]==matrix[3][3]&&matrix[1][5]==matrix[4][2]&&matrix[1][5]==matrix[5][1])						
		return matrix[1][5];

	if(matrix[1][4]==matrix[2][3]&&matrix[1][4]==matrix[3][2]&&matrix[1][4]==matrix[4][1]&&matrix[1][4]==matrix[5][0])						
		return matrix[1][4];

	if(matrix[2][0]==matrix[3][1]&&matrix[2][0]==matrix[4][2]&&matrix[2][0]==matrix[5][3]&&matrix[2][0]==matrix[6][4])						
		return matrix[2][0];

	if(matrix[2][1]==matrix[3][2]&&matrix[2][1]==matrix[4][3]&&matrix[2][1]==matrix[5][4]&&matrix[2][1]==matrix[6][5])						
		return matrix[2][1];
	
	if(matrix[2][2]==matrix[3][3]&&matrix[2][2]==matrix[4][4]&&matrix[2][2]==matrix[5][5]&&matrix[2][2]==matrix[6][6])						
		return matrix[2][2];

	if(matrix[2][6]==matrix[3][5]&&matrix[2][6]==matrix[4][4]&&matrix[2][6]==matrix[5][3]&&matrix[2][6]==matrix[6][2])						
		return matrix[2][6];
	
	if(matrix[2][5]==matrix[3][4]&&matrix[2][5]==matrix[4][3]&&matrix[2][5]==matrix[5][2]&&matrix[2][5]==matrix[6][1])						
		return matrix[2][5];

	if(matrix[2][4]==matrix[3][3]&&matrix[2][4]==matrix[4][2]&&matrix[2][4]==matrix[5][1]&&matrix[2][4]==matrix[6][0])						
		return matrix[2][4];

	// Pengecekan bila masih ada index yang kosong

	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(matrix[i][j]==' ')
				return ' ';																	
		}
	}

	// Jika tidak maka seri.

	return 'D';
}
