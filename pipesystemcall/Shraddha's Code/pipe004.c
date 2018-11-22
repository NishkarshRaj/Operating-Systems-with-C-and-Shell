#include<stdio.h>
#include<unistd.h>

int main() {
   int pipefds1[2], pipefds2[2];
   int rs1, rs2;
   int pid;
   char pipe1writemessage[20] = "Nishkarsh";
   char pipe2writemessage[20] = "Khare";
   char readmessage[20];
   rs1 = pipe(pipefds1);
   
   if (rs1 == -1) {
      printf("Unable to create pipe 1 \n");
      return 1;
   }
   rs2 = pipe(pipefds2);
   
   if (rs2 == -1) {
      printf("Unable to create pipe 2 \n");
      return 1;
   }
   pid = fork();
   
   if (pid != 0) // Parent process
   {
      close(pipefds1[0]); // Close the unwanted pipe1 read side
      close(pipefds2[1]); // Close the unwanted pipe2 write side
      printf("Parent: Write pipe 1 – %s\n", pipe1writemessage);
      write(pipefds1[1], pipe1writemessage, sizeof(pipe1writemessage));
      read(pipefds2[0], readmessage, sizeof(readmessage));
      printf("Parent: Read pipe 2 – %s\n", readmessage);
   } else { //child process
      close(pipefds1[1]); // Close the unwanted pipe1 write side
      close(pipefds2[0]); // Close the unwanted pipe2 read side
      read(pipefds1[0], readmessage, sizeof(readmessage));
      printf("Child: Read pipe 1 – %s\n", readmessage);
      printf("Child: Write pipe 2 – %s\n", pipe2writemessage);
      write(pipefds2[1], pipe2writemessage, sizeof(pipe2writemessage));
   }
   return 0;
}
