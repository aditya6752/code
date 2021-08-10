#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
void copy_bytes(char source_file[], char destination_file[], int byte_count)
{
    int source_file_desc = open(source_file, O_RDONLY);
    if (source_file_desc == -1)
    {
        perror("Error: ");
        exit(1);
    }
    int dest_file_desc = open(destination_file, O_WRONLY | O_CREAT | O_APPEND, S_IRWXU);
    if (dest_file_desc == -1)
    {
        perror("Error: ");
        exit(1);
    }
    if (byte_count < 0)
    {
        fprintf(stderr, "Error: byte count can't be less than 0. Found %d", byte_count);
        exit(1);
    }
    char source_buf[byte_count];
    int read_buf = read(source_file_desc, source_buf, byte_count);
    if (read_buf < 0)
    {
        perror("Error: ");
        exit(1);
    }
    int write_to_dest = write(dest_file_desc, source_buf, byte_count);
    if (write_to_dest < 0)
    {
        perror("Error:");
        exit(1);
    }
    printf("Successfuly copied %d bytes from %s to %s\n", write_to_dest, source_file, destination_file);
}
int main(int argc, char **argv)
{
    printf("This program copies contents of one file to another file.\n\n")
        printf("Enter source filename: ");
    char source_file[100];
    scanf("%s", source_file);
    5 printf("Enter destination filename: ");
    char destination_file[100];
    scanf("%s", destination_file);
    printf("Enter byte count to copy: ");
    int byte_count;
    scanf("%d", &byte_count);
    copy_bytes(source_file, destination_file, byte_count);
}
