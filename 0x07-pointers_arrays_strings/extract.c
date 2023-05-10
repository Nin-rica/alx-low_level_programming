#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 256

int main() {
    char output[] = "apt-utils/jammy-updates 2.4.9 amd64 [upgradable from: 2.4.8]\n"
                    "apt/jammy-updates 2.4.9 amd64 [upgradable from: 2.4.8]\n"
                    "distro-info-data/jammy-updates 0.52ubuntu0.4 all [upgradable from: 0.52ubuntu0.3]\n"
                    "... (remaining lines omitted for brevity)\n"
                    "git/jammy-updates,jammy-security 1:2.34.1-1ubuntu1.9 amd64 [upgradable from: 1:2.34.1-1ubuntu1.8]\n"
                    "... (remaining lines omitted for brevity)\n"
                    "xxd/jammy-updates,jammy-security 2:8.2.3995-1ubuntu2.7 amd64 [upgradable from: 2:8.2.3995-1ubuntu2.5]\n";

    const char* targetPackage = "git/jammy-updates,jammy-security";

    // Find the target package in the output
    char* packageLine = strstr(output, targetPackage);
    if (packageLine != NULL) {
        // Extract the package name and new version using sscanf()
        char package_name[BUFFER_SIZE];
        char new_version[BUFFER_SIZE];
        sscanf(packageLine, "%[^/]/%*[^ ] %[^ ]", package_name, new_version);

        // Print the package name and new version
        printf("Package: %s, New Version: %s\n", package_name, new_version);
    }
    else {
        printf("Package not found in the output.\n");
    }

    return 0;
}

