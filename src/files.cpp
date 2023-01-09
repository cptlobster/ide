#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <regex>

using namespace std;

class AFile {
public:
    // TODO: add language-specific functionality
    string fullpath, path, name, type, ext, content;

    explicit AFile(string ipath="") {
        ParseFilePath(ipath);
        createBuffer();
    }

    string read() {
        // TODO: add syntax highlighting hooks
        ifstream f(fullpath); //taking file as inputstream
        if (f) {
            ostringstream ss;
            ss << f.rdbuf(); // reading data
            content = ss.str();
        }
        else {
            return "File retrieval error";
        }
        return content;
    }

    bool save() {
        ofstream f(fullpath); //taking file as outputstream
        if (f) {


        }
    }

private:
    filebuf buffer;

    bool createBuffer() {
        return false;
    }

    bool ParseFilePath(string ipath = "") {
        // parse filepath and pull name and extension
        // TODO: get file type from extension
        fullpath = ipath;
        // TODO: convert regex operation into raw code?
        regex rgx(R"((.*)\\([^\\]*)\.([0-9a-zA-Z]+)$)");
        smatch matches;

        if (ipath != "") {
            if (regex_search(ipath, matches, rgx)) {
                path = matches[1];
                name = matches[2];
                ext = matches[3];
                return true;
            }
        }
        return false;
    }
};