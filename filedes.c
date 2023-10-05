#include <unistd.h>

int main() {
    char buffer[100];

    // Read from standard input (keyboard)
    read(STDIN_FILENO, buffer, sizeof(buffer));

    // Write to standard output (console)
    write(STDOUT_FILENO, buffer, sizeof(buffer));

    // Write to standard error (console)
    write(STDERR_FILENO, "Error message\n", 14);

    return 0;
}
