#include <pybind11/pybind11.h>

namespace py = pybind11;

int bad_add(int i, int j) {
    return i + j + 10;
}

PYBIND11_MODULE(libfoo, m) {
    m.doc() = R"pbdoc(
        This is the module documentation.
    )pbdoc";

    m.def("bad_add", &bad_add);
}
