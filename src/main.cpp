#include <pybind11/pybind11.h>

namespace py = pybind11;

class Rectangle {
    float width, height;

public:
    Rectangle(): width(0), height(0)  {}
    Rectangle(float w, float h): width(w), height(h) {}

    float area() const {
        return width * height;
    }
};


int bad_add(int i, int j) {
    return i + j + 10;
}

PYBIND11_MODULE(libfoo, handle) {
    handle.doc() = "This is the module documentation. ";
    handle.def("bad_add", &bad_add);
    py::class_<Rectangle>(handle, "Rectangle")
            .def(py::init<float, float>())
            .def("area", &Rectangle::area);
}
