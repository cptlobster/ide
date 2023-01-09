# this is not meant to be included in the actual project
# this is only meant to clean up weird tabbing (probably caused by differences between Visual Studio and other IDEs)
# may want to convert this to C++ code to integrate into the actual IDE
import os


def clean_file(path: str):
    if os.path.exists(path):
        with open(path, "r") as f:
            content = f.read().split("\n")
        newcon = []
        for i in content:
            i = i.replace("\t", "    ")
            newcon.append(i)
        newcon = "\n".join(newcon)
        with open(path, "w") as f:
            f.write(newcon)


if __name__ == "__main__":
    clean_file("C:\\Users\\fires\\dev\\acolyte\\src\\main.cpp")
