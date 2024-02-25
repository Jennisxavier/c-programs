#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "Hello, Binary Data!";

    // Open a binary file in binary write mode
    file = fopen("output.bin", "wb");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write binary data to the file
    size_t bytesWritten = fwrite(data, sizeof(char), sizeof(data) - 1, file);

    if (bytesWritten > 0) {
        printf("Wrote %zu bytes to the file.\n", bytesWritten);
    } else {
        perror("Error writing file");
    }

    // Close the file
    fclose(file);

    return 0;
}
