#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid > 0) {
        // Parent process
        printf("Parent process (PID: %d) created a child process (PID: %d)\n", getpid(), child_pid);
        sleep(2);  // Parent sleeps for a while to allow the child to become a zombie
        printf("Parent process exiting.\n");
    } else if (child_pid == 0) {
        // Child process
        printf("Child process (PID: %d) executing.\n", getpid());
        printf("Child process exiting.\n");
    } else {
        // Error forking
        perror("Error forking process");
        exit(EXIT_FAILURE);
    }

    // Parent process continues execution
    printf("Parent process continuing.\n");

    // Adding a wait to demonstrate the zombie process
    wait(NULL);

    return 0;
}