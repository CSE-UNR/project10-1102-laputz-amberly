//Author: Amberly Laputz
//Date: 4/23-5/6
//purpose: Project 10

//l==letter, i==user input, 



//finish the check and display functions and you're done :)
int display(char j); //displaying the guess
int usrim(char z); //getting the user's input on their guess
void check (char l); //checking againt the word I picked
int prompt(char i); //reprompting the user
int correct(char p);
int incorrect(char o);

	#include<stdio.h>
	
	#define FILE_NAME "word.txt"
int main(){
	FILE *fp1;
	char words[10][10];
	int i = 0;
	char z, p, o, j;
	fp1=fopen("word.txt", "r");
	prompt(i);
	usrim(z);
	display(j);
	
	correct(p);
	incorrect(o);
	
if(fp1==NULL){
	printf("File doesn't exist\n");
}
	return 0;
}

int prompt(char i){
char f;
	printf("Let's play a game!\n");
	printf("Try to guess the five letter word\n");
	return f;
}

int usrim(char z){
	char r;
	printf("Enter your guess: \n");
	scanf("%c", &r);
	return r;
}

void check (char l){
char a;
usrim(a);
FILE *fp1;
fp1=fopen("word.txt", "r");
char words[1][1];
int i;
for(int j = 0; j < i; j++){
	printf("%s \n", words[j]);
}

fclose(fp1);
	
}

int display(char j){
char guess;
	printf("Oops! Try again\n");
	printf("Enter your guess: \n");	
	scanf("%c", &guess);

}

int correct(char p){
FILE *fp1;
	printf("Congrats! You've beat the game!!\n");
	fclose(fp1);
	return p;
}

int incorrect(char o){
	printf("Wrong guess, try again!");
	return o;
}
