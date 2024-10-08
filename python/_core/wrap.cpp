#include <pybind11/pybind11.h>
#include "example.hpp"

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(_core, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}
