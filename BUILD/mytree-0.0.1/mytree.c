#define _XOPEN_SOURCE 500
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>

static int traverse_callback(const char *fpath, const struct stat *sb, 
                            int typeflag, struct FTW *ftwbuf) {
    // typeflag tells you if it's a file, directory, symlink, etc.
    printf("%*s%s\n", ftwbuf->level * 2, "", fpath + ftwbuf->base);
    return 0; // return non-zero to stop traversal
}

int main(int argc, char **argv) {
    const char *dir = argc > 1 ? argv[1] : ".";
    
    // use file tree walker
    if (nftw(dir, traverse_callback, 20, FTW_PHYS) == -1) {
        perror("nftw");
        exit(EXIT_FAILURE);
    }
    
    return 0;
}
