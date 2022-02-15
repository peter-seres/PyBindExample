import libfoo


def test_main():
    assert libfoo.bad_add(1, 2) != 3


def test_rectangle():
    r = libfoo.Rectangle(5, 4)
    assert abs(r.area() - 20.0) < 1e-3
