#include <cstdio>
#include "files.cpp"
#include <chrono>

using namespace std;

int main() {
    // TODO: add UI
    AFile afile = AFile(R"(C:\Users\fires\dev\ide\README.md)");
    cout << "File " << afile.name << "." << afile.ext << " (" << afile.fullpath << ")" << endl;
    cout << afile.read() << endl;
}